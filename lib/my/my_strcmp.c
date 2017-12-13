/*
** my_strcmp.c for  in /home/beche_f/minishell/PSU_2015_minishell2/lib/my
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Fri Apr  8 16:06:32 2016 beche_f
** Last update Wed Apr 20 11:28:10 2016 bourre_a
*/

#include <stdlib.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s2 == NULL)
    return (1);
  while (s1[i] != '\0')
    {
      if ((s1[i] != s2[i]) || s1 == '\0' || s2 == '\0')
	return (1);
      i = i + 1;
    }
  return (0);
}
