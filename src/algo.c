/*
** main2.c for  in /home/beche_f/CPE/test/tmp/CPE_2015_Lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sun Apr 24 11:47:00 2016 beche_f
** Last update Mon Apr 25 19:46:09 2016 beche_f
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "lib.h"

char		**init_chemin(char **chemin)
{
  int	i;

  i = 0;
  if ((chemin = malloc(sizeof(char*) * 4)) == NULL)
    return (NULL);
  while (i < 4)
    {
      if ((chemin[i] = malloc(sizeof(char) * 512)) == NULL)
  	return (NULL);
      chemin[i] = my_memset(chemin[i], '\0', 512);
      i++;
    }
  chemin[4] = NULL;
  return (chemin);
}

int	function_start(t_list *list, t_node *tmp, t_algo *al, char **chemin)
{
  t_link	*link;

  link = tmp->link->tail;
  while ((link != NULL) && (al->stop == 0))
    {
      if ((my_strcmp(al->end, link->link)) == 0)
	{
	  chemin[0] = my_strcpy(al->end);
	  chemin[1] = NULL;
	  al->stop = 1;
	}
      link = link->prev;
    }
  if (al->stop == 0)
    {
      link = tmp->link->tail;
      while (link != NULL)
	{
	  chemin[0] = my_strcpy(link->link);
	  if ((chmin(list, al->end, link->link, chemin)) == 1)
	    al->stop = 1;
	  link = link->prev;
	}
    }
  return (0);
}

int	my_algo_1(char **chemin, t_algo *al, t_list *list)
{
  t_node	*tmp;


  tmp = list->tail;
  while (tmp != NULL)
    {
      if (tmp->name[0] != '#')
        {
          if (tmp->pos == 1)
            {
	      function_start(list, tmp, al, chemin);
            }
        }
      tmp = tmp->prev;
    }
  return (0);
}

int		algo(t_list *list, t_lem *lem)
{
  t_algo        al;
  char		**chemin;

  al.stop = 0;
  chemin = NULL;
  if ((chemin = init_chemin(chemin)) == NULL)
    return (-1);
  init_algo(&al, list);
  (void)lem;
  nb_chemin(al.nb_ch_start, al.nb_ch_end);
  my_algo_1(chemin, &al, list);
  if (al.stop == 0)
    {
      my_putstr("MAP NON SOLVABLE\n");
      return (0);
    }
  display_tab(lem, chemin, al.end);
  free(al.end);
  return (0);
}
