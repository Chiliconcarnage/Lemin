/*
** create_tab.c for  in /home/maison_f/Epitech/rendu/CPE_2015_Lemin/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Sat Apr 23 01:16:03 2016 Maisonnave Florian
** Last update Mon Apr 25 19:50:56 2016 beche_f
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "lib.h"

int	size_way(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}

void	display_way(char **tab, int k, int i, int max)
{
  my_putstr("P");
  my_put_nbr(i);
  my_putstr("-");
  my_putstr(tab[k % max]);
  my_putstr(" ");
}

int	max_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}

void	display_tab(t_lem *lem, char **tab, char *end)
{
  int	size;
  int	k;
  int	max;
  int	i;

  k = 1;
  max = max_tab(tab);
  size = size_way(tab) - 2;
  printf("max display = %d\n", max);
  i = 0;
  while (k <= (lem->nb_fourmiz + size))
    {
      display_way(tab, k, i, max);
      my_putchar('\n');
      k++;
      i++;
    }
  my_putstr("P");
  my_put_nbr(lem->nb_fourmiz);
  my_putstr("-");
  my_putstr(end);
  my_putstr("\n");
}

char	**malloc_tab(t_list *list, char **tab)
{
  int	i;

  if ((tab = malloc(sizeof(char*) * (list->nb_node))) == NULL)
    return (NULL);
  i = 0;
  while (i < list->nb_node)
    {
      if ((tab[i] = malloc(sizeof(char) * (list->nb_node))) == NULL)
	return (NULL);
      i++;
    }
  return (tab);
}
