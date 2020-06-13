/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ants.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_ants(char **str){
	int		i;

	i = 0;
	while (str[i] != NULL && ft_strcmp(str[i], "##start") != 0){
		if (ft_wordc(str[i], ' ') == 1 && ft_isdigit(str[i][0]) == 1)
			return(i);
		i++;
	}
	return(-1);
}