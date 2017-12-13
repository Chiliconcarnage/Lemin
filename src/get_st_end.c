/*
** get_st_end.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Tue Apr 19 14:09:46 2016 beche_f
** Last update Tue Apr 19 14:21:46 2016 beche_f
*/
#include <stdlib.h>
#include "list.h"
#include "lib.h"

t_list	*get_st_end(t_lem *l)
{
  t_node	*tmp;

  tmp = l->list->tail;
  while (tmp != NULL)
    {
      if (tmp->pos != 0)
	{
	  tmp->prev->pos = tmp->pos;
	  tmp = tmp->prev;
	}
      tmp = tmp->prev;
    }
  return (l->list);
}
