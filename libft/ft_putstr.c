/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:59:49 by kntshoko          #+#    #+#             */
/*   Updated: 2019/06/12 14:50:09 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int l;

	if (!s)
		return ;
	l = 0;
	while (s[l] != '\0')
	{
		ft_putchar(s[l]);
		l++;
	}
}
