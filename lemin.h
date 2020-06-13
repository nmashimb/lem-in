/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:05:02 by kntshoko          #+#    #+#             */
/*   Updated: 2020/01/08 10:36:46 by kntshoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "libft/libft.h"

typedef struct		q_list
{
	struct q_list   *next;
    int             room_nbr;
	int     		visitor;
    int             occupied;
    int             ant_count;
    int             used;
    int             forward;
    char            *links[100000];
    char            *room;
}					r_list;

void        ft_add_rooms(r_list **rooms, int room_no);
void        ft_create_rooms_list(r_list **head, int *rooms, int path_len);
void        ft_occupy_room(r_list **head, int next_room, int ant, int end);
void        ft_move_ants(r_list **head, int *paths, int ants, int path_len);
void        free_all(char **str, char **names, char *rooms, char *connections, char *s, char **points, r_list **head);
void        call_add_link(char *connections, r_list **head, char *start, char **names, char *end);
void 	    make_path(r_list **head, char **path, char *room, char *end);
void	    ft_go_to_prev_bgn(r_list *head, char *stored, char **bgn, char *start);
void	    ft_create_list(r_list **head, char **rooms);
void        ft_printf_farm(char **str);
void		ft_pop_list(r_list **head);
int		    ft_s_path_indx(char **tmp, char *end);
int		    ft_update_list(r_list **head, char *paths, int *path_indx);
int		    ft_ants(char **str);
int		    ft_splitlen(char **str);
int		    end_(char *paths, char *end);
int         i_strrchr(const char *s, int c);
int         ft_next_ant(r_list **head, int end, int ant, int ants);
int         ft_ant_infront(r_list **head, int end);
int         ft_next_room_empty(r_list **head, int next_room, int end);
int         ft_end_full(r_list **head, int end, int ants);
int         ft_ant_location(r_list **head, int *paths, int ant, int path_len);
int         ft_cmp(const char *s1, const char *s2);
int         validate(char *rooms, int ants, char **points);
size_t      ft_wordc(char const *s, int c);
char        *rd(void);
char		*ft_short(r_list **head, char *start, char *end);
char        **ft_end(char **str);
char        *room(char **str);
char        *conn(char **str);

#endif
