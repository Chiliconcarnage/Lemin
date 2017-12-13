/*
** get_link.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sat Apr 16 21:15:30 2016 beche_f
** Last update Sat Apr 16 21:19:46 2016 beche_f
*/

#include <stdlib.h>
#include "list.h"
#include "lib.h"

char	*get_link_1(char *str)
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
   while (str[i] != '-' && str[i] != 0)
     {
       tmp[j] = str[i];
       i++;
       j++;
     }
   return (tmp);
}

char	*get_link_2(char *str)
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
  while (str[i] != '-' && str[i] != 0)
    i++;
  i++;
  while (str[i] != '\0')
    {
      tmp[j] = str[i];
      i++;
      j++;
    }
  return (tmp);
}
