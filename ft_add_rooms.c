/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_rooms.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_add_rooms(r_list **rooms, char room_no)
{
	r_list	*p;

	p = (r_list *)malloc(sizeof(r_list));
	p->room = room_no;
  p->visitor = 0;
  p->occupied = '0';
  p->ant_count= 0;
	if (*rooms == NULL)
	{
		p->next = NULL;
		*rooms = p;
	}
	else
	{
		p->next = *rooms;
		*rooms = p;
	}
}