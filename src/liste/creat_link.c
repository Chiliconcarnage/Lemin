/*
** creat_link.c for  in /home/beche_f/CPE_2015_lemin/src/liste
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Tue Apr 19 15:47:16 2016 beche_f
** Last update Tue Apr 19 15:52:47 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

t_l_link	*creat_link()
{
  t_l_link	*list;

  list = NULL;
  if ((list = malloc(sizeof(t_l_link))) == NULL)
    return (NULL);
  list->head = NULL;
  list->tail = NULL;
  list->nb_link = 0;
  return (list);
}
