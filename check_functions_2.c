/*
** check_functions_2.c for check_functions_2 in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 13:17:25 2011 gregoire1 borel
** Last update Thu Feb 10 13:42:03 2011 gregoire1 borel
*/

#include "alum-1.h"

int     check_line_special_char(char **tab, char *line, int row)
{
  int   i;

  i = 0;

  if (my_strncmp(line, "*", my_strlen(line)) == 0)
    {
      modify_tab_special_char(tab, row);
      return (0);
    }
  while (line[i])
    {
      if (line[i] < '0' || line[i] > '9')
        {
          my_putstr("\nErreur : merci d'entrer un nombre.\n");
          return (-1);
        }
      else
        i++;
    }
  return (0);
}
