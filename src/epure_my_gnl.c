/*
** main.c for my_epure in /home/oem/home/CPE_2015_lemin/Maxence_epure
**
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
**
** Started on  Thu Mar 31 11:20:43 2016 OEM Configuration (temporary user)
** Last update Sun Apr 24 11:46:28 2016 beche_f
*/
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"

int	end_str(char *tmp, int a)
{
  int   c;

  c = 0;
  while (tmp[a] != '\0')
    {
      if (tmp[a] != 32 && tmp[a] != 8)
        c++;
      a++;
    }
  if (c != 0)
    return (1);
  else
    return (0);
}

char	*epure_av(char *tmp)
{
  int   i;
  int   nb;

  i = 0;
  nb = 0;
  while (tmp[i] == 32 || tmp[i] == '\t')
    i++;
  while (tmp[i] != '\0')
    {
      if (tmp[i] == ' ' || tmp[i] == '\t')
        {
          if (end_str(tmp, i) == 1)
            tmp[nb++] = ' ';
          while (tmp[i] == ' ' || tmp[i] == '\t')
            i++;
        }
      tmp[nb++] = tmp[i++];
    }
  tmp[i] = '\0';
  tmp[nb] = '\0';
  if (tmp[nb - 1] == 32)
    tmp[nb - 1] = '\0';
  return (tmp);
}
