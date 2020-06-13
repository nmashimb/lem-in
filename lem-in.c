/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c 	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:05:02 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/08 10:36:46 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int     main (void){
r_list  *head;
char    *s;
int     path_indx[10000];
char	*paths= (char *)malloc(sizeof(char) * 10000);
char    **str;
char    *rooms;
char    **points;
char    *connections;
int     ants;
int		len;
char	*end;
char 	*start;
char	**names;

s = rd();
str = ft_strsplit(s, '\n');
rooms = room(str);
points = ft_end(str);
connections = conn(str);
head = NULL;
names = ft_strsplit(rooms, ' ');
if((ft_ants(str)) > -1)
	ants = atoi(str[ft_ants(str)]);
else
	ants = 0;
if (!validate(rooms, ants, points)){
	ft_strdel(&paths);
	free_all(str,names, rooms, connections, s, points, &head);
  return (0);
}
start = points[0];
end = points[1];
ft_create_list(&head, names);
call_add_link(connections, &head, start, names, end);
char *s_path = NULL;
s_path = ft_short(&head, start, end);
if (s_path != NULL && ft_strstr(s_path, start) != NULL && ft_strstr(s_path, end) != NULL){
	ft_printf_farm(str);
	len = ft_update_list(&head, s_path, path_indx);
	ft_move_ants(&head, path_indx, ants, len);
}
else
	ft_putendl("Error");
free_all(str,names, rooms, connections, s, points, &head);
ft_strdel(&paths);
ft_strdel(&s_path);
return (0);
}
