/*
** put_in_list.c for  in /home/beche_f/CPE_2015_lemin/src/liste
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Mar 31 11:29:49 2016 beche_f
** Last update Sun Apr 24 11:43:40 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

t_node		*init_node(char *s, int pos)
{
  t_node	*elem;
  char		*x;
  char		*y;

  elem = NULL;
  if ((elem = malloc(sizeof(t_node))) == NULL)
    return (NULL);
  x = get_box_x(s);
  y = get_box_y(s);
  elem->name = NULL;
  elem->pos = pos;
  elem->x = 0;
  elem->y = 0;
  elem->link = NULL;
  elem->linker = 0;
  elem->name = get_box_name(s);
  elem->link = creat_link();
  elem->x = my_getnbr(x);
  elem->y = my_getnbr(y);
  free(x);
  free(y);
  return (elem);
}
int	put_box_in_list_extend(t_node *elem, char *s)
{
  int		len;

  len = my_strlen(s) + 1;
  if ((elem->str = malloc(sizeof(char) * (len + 1))) == NULL)
    return (-1);
  my_memset(elem->str, '\0', len);
  my_strcat(elem->str, s);
  return (0);
}

int	put_box_in_list(t_lem *l, t_list *list, char *s, int pos)
{
  t_node	*elem;


  (void)l;
  if ((elem = init_node(s, pos)) == NULL)
    return (-1);
  if (put_box_in_list_extend(elem, s) == -1)
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
  list->nb_node++;
  return (0);
}
