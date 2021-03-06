/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_room_empty.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int     ft_next_room_empty(r_list **head, int next_room, int end){
  r_list *trav;

  trav = *head;
  while (trav != NULL){
    if (trav->room_nbr == next_room && trav->occupied == '1' && trav->room_nbr != end)
      return (0);
    trav = trav->next;
  }
  return (1);
}