/*
** my_strcpy.c for  in /home/beche_f/CPE/test/tmp/CPE_2015_Lemin/src
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Mon Apr 25 19:49:24 2016 beche_f
** Last update Mon Apr 25 19:50:45 2016 beche_f
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "lib.h"

char	*my_strcpy(char *str)
 {
   char  *res;
   int   i;

   i = 0;
   res = malloc(sizeof(char) * my_strlen(str + 1));
   while (str[i])
     {
       res[i] = str[i];
       i++;
     }
   res[i] = '\0';
   return (res);
 }
