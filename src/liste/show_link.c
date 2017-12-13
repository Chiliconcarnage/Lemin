/*
** show_link.c for  in /home/beche_f/CPE_2015_lemin/src/liste
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Tue Apr 19 16:15:29 2016 beche_f
** Last update Mon Apr 25 19:54:17 2016 beche_f
*/

#include <stdio.h>
#include "list.h"
#include "lib.h"

void	show_link(t_l_link *l, int nb)
{
  t_link	*tmp;

  tmp = l->tail;
  if (nb != -1)
    {
      my_put_nbr(nb);
      my_putchar('\n');
    }
  while (tmp != NULL)
    {
      my_putstr(tmp->link);
      my_putchar('\n');
      tmp = tmp->prev;
    }
}
