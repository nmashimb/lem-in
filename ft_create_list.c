/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

static  void ft_create_rooms(r_list **rooms, char *room_name)
{
	r_list *p;

	p = (r_list *)malloc(sizeof(r_list));
	p->room = room_name;
	p->occupied = '0';
	p->ant_count = 0;
	p->visitor = 0;
	p->forward = 1;
	p->used = 0;
	p->links[0] = NULL;
	if(*rooms == NULL)
	{
		p -> next = NULL;
		*rooms = p;
	}
	else
	{
		p->next = *rooms;
		*rooms = p;
	}
}

void	ft_create_list(r_list **head, char **rooms)
{
	size_t i;
    
    i = 0;
	while(rooms[i] != NULL)
	{
		ft_create_rooms(head,rooms[i]);
		i++;
	}
}