/*
** get_link_into_node.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sat Apr 16 21:37:27 2016 beche_f
** Last update Sat Apr 16 22:38:31 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

t_list		*get_link_into_node(t_list *l, __attribute__((unused))char *s)
{
  t_node	*tmp;
  int		y;
  char		*start;
  char		*end;

  start = get_link_1(s);
  end = get_link_2(s);
  tmp = l->tail;
  while (tmp != NULL)
    {
      if (my_strcmp(start, tmp->name) == 0)
	{
	  y = 0;
	  while (tmp->link[y] != NULL)
	    y++;
	  tmp->link[y] = end;
	}
      tmp = tmp->prev;
    }
  if (start != NULL)
    free(start);
  return (l);
}
