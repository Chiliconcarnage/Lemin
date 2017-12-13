/*
** get_box_x.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sat Apr 16 21:12:42 2016 beche_f
** Last update Sat Apr 16 22:09:34 2016 beche_f
*/

#include <stdlib.h>
#include <unistd.h>
#include "list.h"
#include "lib.h"

char	*get_box_x(char *str)
{
  int   i;
  int   j;
  char  *tmp;
  int	len;

  len = my_strlen(str) + 1;
  i = 0;
  j = 0;
  if ((tmp = malloc(sizeof(char) * (len + 1))) == NULL)
    return (0);
  my_memset(tmp, '\0', len);
  while (str[i] != ' ' && str[i] != 0)
    i++;
  i++;
  while (str[i] != ' ' && str[i] != 0)
    {
      tmp[j] = str[i];
      i++;
      j++;
    }
  return (tmp);
}

char	*get_box_name(char *str)
{
  int   i;
  int   j;
  char  *tmp;
  int	len;

  len = my_strlen(str) + 1;
  i = 0;
  j = 0;
  if ((tmp = malloc(sizeof(char) * (len + 1))) == NULL)
    return (0);
  my_memset(tmp, '\0', len);
  while (str[i] != ' ' && str[i] != 0)
    {
      tmp[j] = str[i];
      i++;
      j++;
    }
  return (tmp);
}

void	loop_end(t_algo *al)
{
  while (al->tmp->str[al->i] != '\0')
    {
      al->end[al->i] = al->tmp->name[al->i];
      al->i++;
    }
}
