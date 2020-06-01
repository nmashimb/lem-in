/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_occupy_room.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int   ft_ant_location(r_list **head, char *paths, int ant){
  r_list  *trav;
  int  indx;

  trav = *head;
  indx = 0;
  while (trav != NULL){
    if (ant == trav->visitor){
      while (paths[indx] != '\0'){
        if (trav->room == paths[indx])
          return (indx);
        indx++;
      }
    }
    trav = trav->next;
  }
  return (0);
}