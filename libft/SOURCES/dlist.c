#include "dlist.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void    free_dlist(t_dlist **node)
{
	int i;

	i = 0;

	free((*node)->str);
	free(*node);
}

t_dlist *new_dlist(void)
{
	t_dlist *new;

	if(!(new = malloc(sizeof(t_dlist))))
		return (NULL);
	(new->mem)[0] = (void*)new->str;

	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void pushback_dlist(t_dlist **last, t_dlist *node)
{
	while (*last && (*last)->next)
		last = &(*last)->next;
	if (*last)
	{
		(*last)->next = node;
		node->prev = *last;
	}
	else
		*last = node;
}

void pushfront_dlist(t_dlist **first, t_dlist *node)
{
	while (*first && (*first)->prev)
		first = &(*first)->prev;
	if (*first)
	{
		(*first)->prev = node;
		node->next = *first;
	}
	else
		*first = node;
}

void    pop_dlist(t_dlist **node, t_dlist **first)
{
  if ((*node) == (*first))
    (*first) = (*node)->next;
	else if ((*node)->prev)
		(*node)->prev->next = (*node)->next;
  if ((*node)->next)
	(*node)->next->prev = (*node)->prev;
	free_dlist(node);
}

