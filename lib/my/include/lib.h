/*
** lib.h for  in /home/beche_f/PSU_2015_minishell2/lib/my/include
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Sun Mar 20 15:05:23 2016 beche_f
** Last update Sat Apr 16 22:16:04 2016 beche_f
*/

#include "get_next_line.h"
#ifndef LIB_H_
#define LIB_H_

int	my_strlen(char*);
int	my_putchar(char);
int	my_putstr(char*);
int	my_puterror(char*);
int	my_getnbr(char*);
char	*my_memset(char*, char, int);
int	my_put_nbr(int);
char	*my_strcat(char*, char*);
char	*my_strcat_2(char*, char*);
void	free_char_2d(char**);
void	display_char_2d(char**);
char	**malloc_char_2d(char**, int, int);
int	my_strcmp(char*, char*);
#endif /* !LIB_H_ */
