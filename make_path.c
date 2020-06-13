/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

static void 	new(r_list **head, char **path, char *room, char *end)
{
	r_list *temp;
	
	temp = *head;
	while(temp != NULL && ft_strcmp(temp->room,room) != 0)
		temp = temp->next;
		if(temp != NULL && temp->links[0] != NULL)
		{
			ft_strcat(*path," ");
			ft_strcat(*path,temp->links[0]);
			if(temp != NULL && ft_strcmp(temp->links[0],end) != 0)
				new(head, path, temp->links[0], end);
		}
}

void 	        make_path(r_list **head, char **path, char *room, char *end)
{
	int i;
    r_list *temp;
    
    temp = *head;
	while(temp != NULL && ft_strcmp(temp->room,room) != 0)
		temp = temp->next;
		i = 0;
		while (temp->links[i] != NULL)
		{
			if(i > 0)
			{
				ft_strcat(*path,"\n");
				ft_strcat(*path,room);
			}
			else
			{
				ft_strcpy(*path,room);
			}
			ft_strcat(*path," ");
			ft_strcat(*path,temp->links[i]);
			new(head, path, temp->links[i], end);
			i++;
		}
}