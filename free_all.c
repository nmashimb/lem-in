/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void    free_all(char **str, char **names, char *rooms, char *connections, char *s, char **points, r_list **head){
  char **tmp = str;
  while (*tmp != NULL)
  {
    free(*tmp++);
  }
  free(str);
  ft_strdel(&rooms);
  tmp = points;
  while (*tmp != NULL)
  {
    ft_strdel(&(*tmp++));
  }
  free(points);

  tmp = names;
  while (*tmp != NULL)
  {
    ft_strdel(&(*tmp++));
  }
  free(names);

  ft_strdel(&s);
  ft_strdel(&connections);
  while (*head != NULL)
  {
	  int i = 0;
  	while ((*head)->links[i] != NULL)
  	{
    	ft_strdel(&((*head)->links[i++]));
  	}

    ft_pop_list(head);
  }
}