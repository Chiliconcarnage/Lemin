/*
** check_link.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Tue Apr 12 15:28:42 2016 beche_f
** Last update Tue Apr 12 15:40:49 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

int	is_no_space(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == ' ')
	return (-1);
      i++;
    }
  return (0);
}

int	is_1_tiret(char *str)
{
  int	i;
  int	nb;

  nb = 0;
  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == '-')
	nb++;
      i++;
    }
  if (nb != 1)
    return (-1);
  return (0);
}

int	check_name_link(char *str)
{
  int   status;
  int	i;

  (void)status;
  i = 0;
  while (str[i] != 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') ||
	  (str[i] >= 'A' && str[i] <= 'Z') ||
	  (str[i] >= '0' && str[i] <= '9') || str[i] == '-')
	status = 0;
      else
	return (-1);
      i++;
    }
  return (0);
}

int	check_link(char *str)
{
  if (is_no_space(str) == -1)
    return (-1);
  if (is_1_tiret(str) == -1)
    return (-1);
  if (check_name_link(str) == -1)
    return (-1);
  return (0);
}
