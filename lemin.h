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
    int             room;
	int     		visitor;
    int             occupied;
    int             ant_count;
}					r_list;

void        ft_add_rooms(r_list **rooms, char room_no);
void        ft_create_rooms_list(r_list **head, char *rooms);
void        ft_occupy_room(r_list **head, char next_room, int ant);
void        ft_move_ants(r_list **head, char *paths, int ants, char end);
void        ft_printf_farm(char **str);
void		ft_pop_list(r_list **head);
int         ft_next_ant(r_list **head, char end, int ant, int ants);
int         ft_ant_infront(r_list **head, char end);
int         ft_next_room_empty(r_list **head, char next_room, char end);
int         ft_end_full(r_list **head, char end, int ants);
int         ft_ant_location(r_list **head, char *paths, int ant);
int         ft_cmp(const char *s1, const char *s2);
int         validate(char **str, char *rooms);
size_t      ft_wordc(char const *s, int c);
char        *rd(void);
char        *end(char **str);
char        *room(char **str);
char        *conn(char **str);

#endif
