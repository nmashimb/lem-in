/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int	i_strrchr(const char *s, int c)
{
	int l;

	l = ft_strlen(s) + 1;
	while (l--)
		if (s[l] == (unsigned char)c)
			return (l);
	return (0);
}