/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

size_t      ft_wordc(char const *s, int c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
			l++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (l);
}