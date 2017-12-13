/*
** direct.c for  in /home/maison_f/Epitech/rendu/CPE_2015_Lemin/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Sun Apr 24 02:31:27 2016 Maisonnave Florian
** Last update Sun Apr 24 02:31:29 2016 Maisonnave Florian
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "lib.h"

void	direct_link(char *end, t_lem *lem)
{
  int	i;

  i = 1;
  while (i <= lem->nb_fourmiz)
    {
      my_putstr("P");
      my_put_nbr(i);
      my_putstr("-");
      my_putstr(end);
      my_putstr("\n");
      i++;
    }
}
