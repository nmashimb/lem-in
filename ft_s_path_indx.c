/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_path_indx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:05:02 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/08 10:36:46 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_s_path_indx(char **tmp, char *end){
	int i;
	int indx;
	
	indx = 0;
	i = 0;
	size_t min = ft_strlen(tmp[0]);
	while(tmp[i] != NULL){
		if (min > ft_strlen(tmp[i]) && ft_strstr(tmp[i], end)){
			min = ft_strlen(tmp[i]);
			indx = i;	
		}
		i++;
	}
	return (indx);
}