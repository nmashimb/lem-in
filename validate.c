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

static int     ft_end_start_exist(char **str){
  int i;
  int count;

  i = 0; 
  count = 0;
  while (str[i] != NULL){
    if (count == 2){
      return (1);
    }
    if (ft_strcmp(str[i], "##end") == 0 || ft_strcmp(str[i], "##start") == 0){
      count++;
    }
    i++;
  }

  return (0);
}

int     validate(char **str, char *rooms){

  if (!ft_end_start_exist(str) || atoi(str[0]) == 0 || ft_strlen(rooms) == 0)
  {
    ft_putendl("Error");
    return (0);
  }
  return (1);
}