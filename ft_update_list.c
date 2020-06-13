/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_update_list(r_list **head, char *paths, int *path_indx){
	char 	**tmp;
	r_list	*trv;
    char **temp;
	int		i;

	i = 0;
	tmp = ft_strsplit(paths, ' ');
	while (tmp[i] != NULL){
		trv = *head;
		while (trv != NULL){
			if (ft_strcmp(tmp[i], trv->room) == 0){
				trv->room_nbr = i;
				path_indx[i] = i;
			}
			trv = trv->next;
		}
		i++;
	}
	temp = tmp;
	i = 0;
  	while (temp[i] != NULL)
  	{
    	ft_strdel(&temp[i++]);
  	}
  	free(tmp);
	return (i);
}