/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_add_link.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

static void        add_link(char **con, r_list **head, char *cp)
{
	int     x;
    int     y;
	char    **sp;
	char    *s;
    char    **temp;
    r_list  *tmp;
    
    s = *con;
	sp = ft_strsplit(s,'-');
	x = 0;
	while(sp[x] != NULL)
	{
		if(ft_strcmp(sp[x], cp) == 0)
		{
			y = 0;
			tmp = *head;
			while(tmp != NULL && ft_strcmp(tmp->room,cp) != 0)
				tmp = tmp->next;
			while(tmp->links[y] != NULL)
				y++;
			if(x == 0)
			{
				tmp->links[y] = ft_strdup(sp[1]);
				tmp->links[y+1] = NULL;
			}
			else
			{
				tmp->links[y] = ft_strdup(sp[0]);
				tmp->links[y+1] = NULL;
			}	
			free(*con);	
			*con = ft_strdup("#########################");	
		}
		x++;
	}
	temp = sp;
    while (*temp != NULL)
    {
        free(*temp++);
    }
    free(sp);
}

void        call_add_link(char *connections, r_list **head, char *start, char **names, char *end)
{
	int j = 0;
	int i = 0;
    char **tmp;
    char **con;

	con = ft_strsplit(connections,';');
	while(con[i] != NULL)
	{
		add_link(&con[i], head, start);
		i++;
	}
	while(names[j] != NULL)
	{
		i = 0;
		if((ft_strcmp(names[j],end) != 0))
		{
			while(con[i] != NULL)
			{
				add_link(&con[i], head, names[j]);
				i++;
			}
		}			
		j++;
	}
	tmp = con;
	i = 0;
  	while (tmp[i] != NULL)
  	{
    	ft_strdel(&tmp[i++]);
  	}
  	free(con);
}