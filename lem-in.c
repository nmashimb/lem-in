#include "lemin.h"

void    free_all(char **str, char *rooms, char *connections, char *s, char *points, r_list **head){
  char **tmp = str;
  while (*tmp != NULL)
  {
    free(*tmp++);
  }
  free(str);
  ft_strdel(&rooms);
  ft_strdel(&points); 
  ft_strdel(&s);
  ft_strdel(&connections);
  while (*head != NULL){
    ft_pop_list(head);
  }
}

int     main (void){
r_list  *head;
char    *s;
char    *paths;
char    **str;
char    *rooms;
char    *points;
char    *connections;
int     ants;

s = rd();
str = ft_strsplit(s, '\n');
rooms = room(str);
points = end(str);
connections = conn(str);
head = NULL;
ants = atoi(str[0]);
if (!validate(str, rooms))
  return (0);
ft_create_rooms_list(&head, rooms); 
ft_printf_farm(str);
ft_move_ants(&head, paths, ants, points[2]);
free_all(str, rooms, connections, s, points, &head);
return (0);
}
