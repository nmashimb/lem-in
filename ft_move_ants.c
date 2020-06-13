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

void   ft_move_ants(r_list **head, int *paths, int ants, int path_len){ 
  int ant;
  int loc;
  
  ant = 1;
  while(!ft_end_full(head, paths[path_len - 1], ants)){
    ant = ft_ant_infront(head, paths[path_len - 1]);
    loc = ft_ant_location(head, paths, ant, path_len);
    while(ant <= ants && loc + 1 != path_len && \
    ft_next_room_empty(head, paths[loc + 1], paths[path_len - 1]) && !ft_end_full(head, paths[path_len - 1], ants)){
        ft_occupy_room(head, paths[loc + 1], ant, paths[path_len - 1]);
        ant = ft_next_ant(head, paths[path_len - 1], ant, ants);
        loc = ft_ant_location(head, paths, ant, path_len);  
    }
    ft_putstr("\n");
  }
}