#include "lemin.h"

void		ft_pop_list(r_list **head)
{
	r_list	*p;

	p = NULL;
	if (*head == NULL)
	{
		return ;
	}
	else
	{
		p = *head;
		*head = p->next;
		p->next = NULL;
		free(p);
	}
//	return (0);
}
