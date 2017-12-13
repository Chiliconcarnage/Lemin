/*
** creat_list.c for  in /home/beche_f/CPE_2015_lemin/src/liste
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Mar 31 11:27:31 2016 beche_f
** Last update Thu Mar 31 11:29:25 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

t_list		*creat_list()
{
  t_list	*list;

  list = NULL;
  if ((list = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  list->head = NULL;
  list->tail = NULL;
  list->nb_node = 0;
  return (list);
}
