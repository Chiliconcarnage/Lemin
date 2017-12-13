/*
** check_is_namebox.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Wed Apr  6 10:53:35 2016 beche_f
** Last update Tue Apr 19 14:08:45 2016 beche_f
*/

#include "list.h"
#include "lib.h"

int	is_2_space(char *str)
{
  int	i;
  int	nb;

  nb = 0;
  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == ' ')
	nb++;
      i++;
    }
  if (nb == 2)
    return (0);
  return (-1);
}

int	check_name(char *str, int i)
{
  int	status;

  (void)status;
  while (str[i] != ' ' && str[i] != 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') ||
	  (str[i] >= 'A' && str[i] <= 'Z') ||
	  (str[i] >= '0' && str[i] <= '9'))
	status = 0;
      else
	return (-1);
      i++;
    }
  return (i);
}

int	check_x(char *str, int i)
{
  int status;

  (void)status;
  while (str[i] != ' ' && str[i] != 0)
    {
      if (str[i] >= '0' && str[i] <= '9')
	status = 0;
      else
	return (-1);
      i++;
    }
  return (i);
}

int	check_y(char *str, int i)
{
  int	status;

  (void)status;
  while (str[i] != 0)
    {
      if (str[i] >= '0' && str[i] <= '9')
	status = 0;
      else
	return (-1);
      i++;
    }
  return (i);
}

int	check_is_namebox(char *str)
{
  int	i;
  int	status;

  (void)status;
  i = 0;
  if (str[0] == '#')
    {
      if (my_strcmp("##start", str) == 0)
	return (1);
      else if (my_strcmp("##end", str) == 0)
	return (2);
      return (0);
    }
  if (is_2_space(str) == -1)
    return (-1);
  if ((i = check_name(str, i)) == -1)
    return (-1);
  i++;
  if ((i = check_x(str, i)) == -1)
    return (-1);
  i++;
  if ((i = check_name(str, i)) == -1)
    return (-1);
  return (0);
}
