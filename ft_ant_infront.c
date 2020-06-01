/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ant_infront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int     ft_ant_infront(r_list **head, char end){
  r_list *trav;

  trav = *head;
  while (trav != NULL){
    if (trav->room == end){
      return ((trav->ant_count) + 1);
    }
    trav = trav->next;
  }
  return (1);
}