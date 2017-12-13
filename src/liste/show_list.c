/*
** show_list.c for  in /home/beche_f/CPE_2015_lemin/src/liste
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Mar 31 11:36:38 2016 beche_f
** Last update Mon Apr 25 19:54:04 2016 beche_f
*/

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "lib.h"

void	show_list(t_list *list)
{
  t_node	*tmp;

  tmp = list->tail;
  while (tmp != NULL)
    {
      show_link(tmp->link, -1);
      tmp = tmp->prev;
    }
}
