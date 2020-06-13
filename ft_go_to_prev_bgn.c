/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_go_to_prev_bgn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:05:02 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/08 10:36:46 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

static int		ft_from_indx(char *start, char **str){
	int		len;

	len = ft_splitlen(str) - 1;
	while (ft_strcmp(str[len], start) != 0)
		len--;
	return (len);
}

void	ft_go_to_prev_bgn(r_list *head, char *stored, char **bgn, char *start){

	char	**tmp;
	int		len;
	int		i = 0;
	r_list	*t;

	tmp = ft_strsplit(stored, ' ');
	len = ft_splitlen(tmp) - 1;
		ft_strdel(&(*bgn));
	while (0 <= len){
		t = head;
		while (t != NULL && ft_strcmp(t->room,tmp[len]) != 0)
			t = t->next;
		if (ft_strcmp(",",tmp[len]) == 0)
		{
			ft_strdel(&(*bgn));
			*bgn = ft_strdup(tmp[len + 1]);
		}
		if (ft_strcmp(",",tmp[len]) != 0 && len >= 0 && t->used < ft_splitlen(t->links)){
			ft_strdel(&(*bgn));
			*bgn = ft_strdup(tmp[len]);
			ft_strcat(stored," , ");
			i = ft_from_indx(start, tmp);
			while (i <= len) {
				ft_strcat(stored, tmp[i]);
				ft_strcat(stored, " ");
				i++;
			}
			char **temp = tmp;
			while (*temp != NULL)
  			{
    			ft_strdel(&(*temp++));
  			}
  			free(tmp);
			return ;
		}
		len--;
	}
	char **temp = tmp;
	while (*temp != NULL)
  	{
    	ft_strdel(&(*temp++));
  	}
  	free(tmp);
}