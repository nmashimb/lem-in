/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char        **ft_end(char **str)
{
 char   *start;
 char   *end;
 char   *point;
 char   **s;
 int    i; 
 int    c;

 i = 0;
 start = ft_strnew(0);
 end = ft_strnew(0);
 while(str[i] != NULL)
 {
   c = 0;
   if (ft_strstr(str[i],"##start") != NULL )
   {
    if( ft_wordc(str[i + 1], ' ') == 3)
    {
     ft_strdel(&start);
     while (str[i + 1][c] != ' ' && str[i + 1][c] != '\0')
     c++;
     start = ft_strsub(str[i + 1], 0, c);
    }
   }
   else if (ft_strstr(str[i],"##end") != NULL)
   {
     if( ft_wordc(str[i + 1], ' ') == 3)
     {
     ft_strdel(&end);
     while (str[i + 1][c] != ' ' && str[i + 1][c] != '\0')
     c++;
     end = ft_strsub(str[i + 1], 0, c);
     }
   }
  i++;
 }
 point = ft_joint(start,"|",end);
 s = ft_strsplit(point,'|');
 ft_strdel(&start);
 ft_strdel(&end);
 ft_strdel(&point);
 return (s);
}