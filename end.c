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

char        *end(char **str)
{
 char   *start;
 char   *end;
 char   *point;
 int    i; 
 int    c;

 i = 0;
 start = ft_strnew(0);
 end = ft_strnew(0);
 while(str[i] != NULL)
 {
   c = 0;
   if (ft_strstr(str[i],"##start") != NULL)
   {
     ft_strdel(&start);
     while (str[i + 1][c] != ' ' && str[i + 1][c] != '\0')
     c++;
     start = ft_strsub(str[i + 1], 0, c);
   }
   else if (ft_strstr(str[i],"##end") != NULL)
   {
     ft_strdel(&end);
     while (str[i + 1][c] != ' ' && str[i + 1][c] != '\0')
     c++;
     end = ft_strsub(str[i + 1], 0, c);
   }
  i++;
 }
 point = ft_joint(start,"|",end);
 ft_strdel(&start);
 ft_strdel(&end);
 return (point);
}