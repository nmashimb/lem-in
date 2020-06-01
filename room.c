/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char *room(char **str)
{
 char *rooms;
 char *temp;
 char *temp2;
 int i;
 int c;

 i = 0;
 rooms = ft_strnew(0);
 while (str[i] != NULL)
 {
  if (ft_wordc(str[i],' ') == 3)
  {
   c = 0;
   while (str[i][c] != ' ')
    c++;
   temp = ft_strdup(rooms);
   ft_strdel(&rooms);
   temp2 = ft_strsub(str[i], 0, c);
   rooms = ft_joint(temp," ", temp2);
   ft_strdel(&temp);
   ft_strdel(&temp2);
  }
  i++;
 } 
 return(rooms);
}