/*
** scan_file.c for  in /home/beche_f/CPE_2015_lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sat Apr 16 21:46:22 2016 beche_f
** Last update Sat Apr 16 21:54:37 2016 beche_f
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "lib.h"

int	scan_file(t_lem *l, char* file)
{
  char	*s;
  int	fd;

  l->nb_box = 0;
  l->nb_link = 0;
  if ((fd = open(file, O_RDONLY)) == -1)
    return (-1);
  while ((s = get_next_line(fd)))
    {
      s = epure_av(s);
      if (check_is_namebox(s) == 0)
	l->nb_box++;
      else if (check_link(s) == 0)
       l->nb_link++;
    }
  return (0);
}
