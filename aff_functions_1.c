/*
** aff_functions_1.c for aff_functions_1 in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:16:52 2011 gregoire1 borel
** Last update Thu Feb 10 10:22:51 2011 gregoire1 borel
*/

#include <unistd.h>
#include <stdlib.h>
#include "alum-1.h"

void	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    exit(EXIT_FAILURE);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  if ((write(1, str, my_strlen(str))) == -1)
    exit(EXIT_FAILURE);
}

void    aff_presentation()
{
  my_putstr("\n\tALUM-1\n");
  my_putstr("\n\t   |\n");
  my_putstr("\t  |||\n");
  my_putstr("\t |||||\n");
  my_putstr("\t|||||||\n");
}

void    aff_options()
{
  my_putstr("\nWhat do you want to do?\n");
  my_putstr("\n1. Player 1 VS Player 2\n");
  my_putstr("2. Player VS IA\n");\
  my_putstr("3. Rules\n");
  my_putstr("4. Quit\n");
}
