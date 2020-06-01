/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char        *rd(void)
{
 char *line;
 char *str;
 char *temp;

 str = ft_strnew(0);
 while(get_next_line(0,&line) > 0)
 {
   temp = ft_strdup(str);
   ft_strdel(&str);
   str = ft_joint(temp,"\n",line);
   ft_strdel(&temp);
   ft_strdel(&line);
 }
 return (str);
}