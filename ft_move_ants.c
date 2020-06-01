/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_ants.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void   ft_move_ants(r_list **head, char *paths, int ants, char end){ 
  int ant;
  int loc;
  
  ant = 1;
  int i = 1;
  while(!ft_end_full(head, end, ants)){
    ant = ft_ant_infront(head, end);
    loc = ft_ant_location(head, paths, ant);
    while(ant <= ants && paths[loc + 1] != '\0' && \
    ft_next_room_empty(head, paths[loc + 1], end) && !ft_end_full(head, end, ants)){
        ft_occupy_room(head, paths[loc + 1], ant);
        ant = ft_next_ant(head, end, ant, ants);
        loc = ft_ant_location(head, paths, ant);  
    }
    ft_putstr("\n");
    i++;
  }
}