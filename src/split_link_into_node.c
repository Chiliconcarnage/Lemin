/*
** split_link_into_node.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Tue Apr 19 15:55:18 2016 beche_f
** Last update Sun Apr 24 11:37:17 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

int	split_link_into_node(t_lem *l, t_list *list, char *s)
{
  t_node	*tmp;
  char		*start;
  char		*end;

  start = get_link_1(s);
  end = get_link_2(s);
  tmp = list->tail;
  while (tmp != NULL)
    {
      if (my_strcmp(start, tmp->name) == 0)
	{
	  put_in_link(tmp->link, end);
	}
      tmp = tmp->prev;
    }
  if (start != NULL)
    free(start);
  l->nb_link++;
  return (0);
}
