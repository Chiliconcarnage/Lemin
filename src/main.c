/*
** main.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Wed Mar 30 11:37:37 2016 beche_f
** Last update Mon Apr 25 19:54:55 2016 beche_f
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "lib.h"

int	init_prog(t_lem *lem)
{
  char	*s;

  if ((s = get_next_line(0)) == NULL)
    return (-1);
  if (get_fourmiz(lem, s) == -1)
    return (-1);
  lem->display = creat_link();
  lem->nb_link = 0;
  lem->nb_box = 0;
  lem->list = creat_list();
  return (0);
}

int	error_map()
{
  write(2, "Error : Map is not valid.\n", 27);
  return (-1);
}

int	nb_chemin(int st, int end)
{
  int	nb_chemin;

  nb_chemin = 0;
  if (st < end)
    nb_chemin = st;
  else
    nb_chemin = end;
  return (nb_chemin);
}


int		chmin(t_list *list, char *end, char *my_link, char	**chemin)
{
  t_node	*tmp;
  t_link	*link;

  tmp = list->tail;
  while (tmp != NULL)
    {
      if (my_strcmp(tmp->name, my_link) == 0)
	{
	  link = tmp->link->tail;
	  while (link != NULL)
	    {
	      if (my_strcmp(end, link->link) == 0)
		{
		  chemin[1] = my_strcpy(link->link);
		  chemin[2] = NULL;
		  return (1);
		}
	      link = link->prev;
	    }
	}
      tmp = tmp->prev;
    }
  return (0);
}


int	main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
  t_lem	lem;
  char	*s;
  int	pos;

  pos = 0;
  if (init_prog(&lem) == -1)
    return (0);
  while ((s = get_next_line(0)))
    {
      s = epure_av(s);
      if ((pos = check_is_namebox(s)) != -1)
	put_box_in_list(&lem, lem.list, s, pos);
      else if (check_link(s) == 0)
	split_link_into_node(&lem, lem.list, s);
      put_in_link_2(lem.display, s);
      free(s);
    }
  lem.list =  get_st_end(&lem);
  show_link(lem.display, lem.nb_fourmiz);
  if ((algo(lem.list, &lem)) == -1)
    return (-1);
  free_list(lem.list);
  free_link(lem.display);
  return (0);
}
