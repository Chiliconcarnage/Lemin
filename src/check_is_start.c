/*
** check_is_start.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Wed Apr  6 11:02:07 2016 beche_f
** Last update Wed Apr  6 11:05:04 2016 beche_f
*/

#include "list.h"

int	check_is_start(char *str)
{
  int	i;

  i = 2;
  if (str[0] != '#' || str[1] != '#')
    return (-1);
  if (str[2] == 's' && str[3] == 't' && str[4] == 'a' &&
      str[5] == 'r' && str[6] == 't')
    return (0);
  else
    return (-1);
}
