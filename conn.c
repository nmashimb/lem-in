/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char    *conn(char **str)
{
  char      *con;
  char      *temp;
  char      *s;
  int       i;

  i = 0;  
  con = ft_strnew(0);
  while(str[i] != NULL)
  {
	
   s = ft_strstr(str[i], "-");
   if (s != NULL)
   {
    temp = ft_joint(con, ";", str[i]);
    ft_strdel(&con);
    con = ft_strdup(temp);
    ft_strdel(&temp);    
   }
    i++;
  }
 return(con);
}