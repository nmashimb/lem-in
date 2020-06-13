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

static void   ft_print_walk(r_list *room){
  ft_putstr("L");
  ft_putnbr(room->visitor); 
  ft_putstr(" - ");
  ft_putstr(room->room);
  ft_putstr(" ");
}

void   ft_occupy_room(r_list **head, int next_room, int ant, int end){
  r_list *trav;

  trav = *head;
  while (trav->next != NULL && trav->visitor != ant) {
    trav = trav->next;
  }
  if (trav->next != NULL){
    trav->visitor = 0;
    trav->occupied = '0';
  }
  trav = *head;
  while (trav != NULL && trav->room_nbr != next_room)
    trav = trav->next;
  trav->visitor = ant;
  trav->occupied = '1';
  if (trav->room_nbr == end){
    trav->ant_count++;
  }
  ft_print_walk(trav);
}