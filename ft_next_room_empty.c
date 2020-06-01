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

int     ft_next_room_empty(r_list **head, char next_room, char end){
  r_list *trav;

  trav = *head;
  while (trav != NULL){
    if (trav->room == next_room && trav->occupied == '1' && trav->room != end)
      return (0);
    trav = trav->next;
  }
  return (1);
}