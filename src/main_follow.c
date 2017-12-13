/*
** main_follow.c for  in /home/maison_f/Epitech/rendu/CPE_2015_Lemin/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Sat Apr 23 23:20:53 2016 Maisonnave Florian
** Last update Mon Apr 25 17:57:21 2016 bourre_a
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "lib.h"

int	init_algo(t_algo *al, t_list *list)
{
  t_node	*tmp;

  tmp = list->tail;
  al->i = 0;
  al->tab = NULL;
  if ((al->end = malloc(513)) == NULL)
    return (-1);
  al->end = my_memset(al->end, '\0', 512);
  tmp = list->tail;
  while (tmp != NULL)
    {
      if (tmp->name[0] != '#')
        {
          if (tmp->pos == 2)
            {
              al->end = my_strcpy(tmp->name);
            }
        }
      tmp = tmp->prev;
    }
  al->nb_ch_start = 0;
  al->nb_ch_end = 0;
  al->tmp = list->tail;
  return (0);
}

int	algo_l_loop(t_link *link, char *end, t_lem *lem)
{
  while (link != NULL)
    {
      if ((my_strcmp(end, link->link)) == 0)
	{
	  direct_link(end, lem);
	  return (1);
	}
      link = link->prev;
    }
  return (0);
}

char	**chmin_loop(t_link *link, char **tab, char *end, int i)
{
  while (link != NULL)
    {
      tab[i] = my_strcpy(link->link);
      if ((my_strcmp(end, link->link)) == 0)
	{
	  tab[i + 1] = NULL;
	  return (tab);
	}
      link = link->prev;
      i++;
    }
  return (NULL);
}

int	search_start(t_node *tmp)
{
  int	i;

  i = 0;
  if (tmp->link->nb_link == 0)
    return (error_map());
  i = tmp->link->nb_link;
  return (i);
}

int	search_end(t_node *tmp)
{
  int	i;

  i = 0;
  if (tmp->link->nb_link == 0)
    return (error_map());
  i = tmp->link->nb_link;
  return (i);
}
