/*
** get_nb_fourmiz.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Fri Apr  1 11:07:41 2016 beche_f
** Last update Fri Apr  1 11:23:40 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

int	check_valid_nb_fourmiz(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] < '0' || str[i] >'9')
	return (-1);
      i++;
    }
  return (0);
}

int	get_nb_fourmiz(char *src)
{
  int	rez;
  if (src == NULL)
    return (-1);
  rez = my_getnbr(src);
  return (rez);
}

int	get_fourmiz(t_lem *t, char *s)
{
  s = epure_av(s);

  if (check_valid_nb_fourmiz(s))
    {
      my_puterror("ERROR: Invalid number of fourmiz\n");
      return (-1);
    }
  t->nb_fourmiz = get_nb_fourmiz(s);
  free(s);
  return (0);
}
