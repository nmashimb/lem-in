/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_path_indx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:05:02 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/08 10:36:46 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_forwardii(r_list **head, char *end){
	int j;
	r_list	*t;
	
	t = *head;
	while (t != NULL){
        j = 0;
        if (ft_splitlen(t->links) == 0 && t->room != end)
            t->forward = 0;
        while (t->links[j] != NULL){

            j++;
        }
        t = t->next;    
    }
}

char	*select_path(char *stored, char *end){
	char **tmp;
	char *ret;

	tmp = ft_strsplit(stored, ',');
    ft_strdel(&stored);
	int i = 0;
	int indx = 0;
	size_t min = ft_strlen(tmp[0]);
	while(tmp[i] != NULL){
		if (min > ft_strlen(tmp[i]) && ft_strstr(tmp[i], end)){
			min = ft_strlen(tmp[i]);
			indx = i;	
		}
		i++;
	}
	if (ft_strstr(tmp[indx], end) == NULL){ 
		char **temp = tmp;
    	while (*temp != NULL)
        	ft_strdel(&(*temp++));
    	free(tmp);
		return (0);	
	}
	ret = ft_strdup(tmp[indx]);
    char **temp = tmp;
    while (*temp != NULL)
    {
        ft_strdel(&(*temp++));
    }
    free(tmp);
	return (ret);
}

char		*ft_short(r_list **head, char *start, char *end){
char *bgn;
int i;
char *stored;

bgn = ft_strdup(start);
ft_forwardii(head, end);
stored = ft_strnew(1000);
ft_strcat(stored, bgn);
i = 0;
while (i < 1000000) {
	r_list *find = *head;
	if (bgn == NULL)
		break;
	while (find != NULL && ft_strcmp(find->room, bgn) != 0)
		find = find->next;
	if (find != NULL && ft_strcmp(find->room, bgn) == 0 && (find->used != ft_splitlen(find->links) || find->forward == 1)){ 
			if (ft_splitlen(find->links) > find->used && find->used == ft_splitlen(find->links)){
                ft_strdel(&bgn);
				bgn = ft_strdup(find->links[find->used - 1]);
			}
			else
            {
                ft_strdel(&bgn);
				if (find->links[find->used] == NULL)
					break;
				else
					bgn = ft_strdup(find->links[find->used]);
            }
			find->used++;
			ft_strcat(stored," ");
			ft_strcat(stored, bgn);
	}
	else if (find != NULL && find->used == ft_splitlen(find->links) && ft_strcmp(find->room, bgn) == 0){
		ft_go_to_prev_bgn(*head, stored, &bgn, start);
    }
	i++;
    }
    ft_strdel(&bgn);
    return (select_path(stored, end));
}