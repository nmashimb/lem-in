/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int     validate(char *rooms, int ants, char **points){

  int   i;

  i = 0;
  while (points[i] != NULL)
    i++;
  
  if (i != 2 || ants < 1 || ft_strlen(rooms) == 0)
  {
    ft_putendl("Error");
    return (0);
  }
  return (1);
}