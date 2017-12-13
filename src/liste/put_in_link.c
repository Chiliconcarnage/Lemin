/*
** put_in_link.c for  in /home/beche_f/CPE_2015_lemin/src/liste
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Tue Apr 19 16:00:14 2016 beche_f
** Last update Sun Apr 24 11:41:09 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

int	put_in_link(t_l_link *list, char *s)
{
  t_link	*elem;

  if ((elem = malloc(sizeof(t_link))) == NULL)
    return (-1);
  elem->link = s;
  if (list->head == NULL)
    {
      elem->prev = NULL;
      elem->next = NULL;
      list->head = elem;
      list->tail = elem;
    }
  else
    {
      elem->next = list->head;
      elem->prev = NULL;
      list->head->prev = elem;
      list->head = elem;
    }
  list->nb_link++;
  return (0);
}

int	put_in_link_2_extend(t_link *elem, char *s)
{
  int		len;

  len = my_strlen(s) + 1;
  if ((elem->link = malloc(sizeof(char) * (len + 1))) == NULL)
    return (-1);
  my_memset(elem->link, '\0', len);
  my_strcat(elem->link, s);
  return (0);
}

int	put_in_link_2(t_l_link *list, char *s)
{
  t_link	*elem;

  if ((elem = malloc(sizeof(t_link))) == NULL)
    return (-1);
  if (put_in_link_2_extend(elem, s) == -1)
    return (-1);
  if (list->head == NULL)
    {
      elem->prev = NULL;
      elem->next = NULL;
      list->head = elem;
      list->tail = elem;
    }
  else
    {
      elem->next = list->head;
      elem->prev = NULL;
      list->head->prev = elem;
      list->head = elem;
    }
  list->nb_link++;
  return (0);
}
