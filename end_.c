/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmashimb/kntshoko <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:42:52 by nmashimb          #+#    #+#             */
/*   Updated: 2019/08/09 15:35:08 by nmashimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		end_(char *paths, char *end){
	int 	i;
	int		count;

	i = 0;
	count = 0;
	while (paths[i] != '\n')
	i++;
	if (ft_strncmp(end, &paths[i - 1], ft_strlen(end)) == 0 && count == 0){
		return (i + 1);
		count++;
	}
	return (i + 1);
}