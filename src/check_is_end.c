/*
** check_is_end.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Wed Apr  6 11:05:26 2016 beche_f
** Last update Wed Apr  6 11:08:03 2016 beche_f
*/

#include "list.h"
#include "lib.h"

int	check_is_end(char *str)
{
  int   i;

  i = 2;
  if (str[0] != '#' || str[1] != '#')
    return (-1);
  if (str[2] == 'e' && str[3] == 'n' && str[4] == 'd')
    return (0);
  else
    return (-1);
}
