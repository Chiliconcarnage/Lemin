/*
** free_list.c for  in /home/beche_f/CPE_2015_lemin/src/liste
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Mar 31 11:42:37 2016 beche_f
** Last update Sun Apr 24 11:31:50 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

int	free_link(t_l_link *list)
{
  t_link	*tmp;

  if (list->head == NULL)
    {
      free(list);
      return (0);
    }
  tmp = list->head;
  list->head = list->head->next;
  if (tmp->link != NULL)
    free(tmp->link);
  free(tmp);
  tmp = NULL;
  free_link(list);
  return (0);
}

int	free_list(t_list *list)
{
  t_node	*tmp;

  if (list->head == NULL)
    {
      free(list);
      return (0);
    }
  tmp = list->head;
  list->head = list->head->next;
  if (tmp->name != NULL)
    free(tmp->name);
  if (tmp->str != NULL)
    free(tmp->str);
  if (tmp->link != NULL)
    free_link(tmp->link);
  free(tmp);
  tmp = NULL;
  free_list(list);
  return (0);
}
