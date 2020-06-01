/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rooms_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void   ft_create_rooms_list(r_list **head, char *rooms){
  size_t i;

  i = 0;
  while (i < ft_strlen(rooms)){
    if (ft_isdigit(rooms[i])){
      ft_add_rooms(head, rooms[i]);
    }
    i++;
  }
}