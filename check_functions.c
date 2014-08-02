/*
** check_functions.c for check_functions in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:17:32 2011 gregoire1 borel
** Last update Thu Feb 10 11:08:39 2011 gregoire1 borel
*/

#include <stdlib.h>
#include "alum-1.h"

int	check_tab_computer(char **tab, int flag)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == '|')
	    return (0);
	  j++;
	}
      i++;
    }
  if (flag == 1)
    my_putstr("IA win!\n");
  else
    my_putstr("You win!\n");
  free(tab);
  return (1);
}

int	check_tab(char **tab, int player)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == '|')
	    return (0);
	  j++;
	}
      i++;
    }
  my_putstr("The player ");
  my_putnbr(player);
  my_putstr(" has won!\n");
  free(tab);
  return (1);
}

int	check_line(char *line)
{
  int	i;

  i = 0;
  while (line[i])
    {
      if (line[i] < '0' || line[i] > '9')
	{
	  my_putstr("\nError: please give a number.\n");
	  return (-1);
	}
      else
	i++;
    }
  return (0);
}

int	check_matches(char **tab, int row, int matches)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (tab[row][i])
    {
      if (tab[row][i] == '|')
	count++;
      i++;
    }
  if (matches > count)
    {
      my_putstr("Error: please enter a number comprised between 1 and ");
      my_putnbr(count);
      my_putchar('\n');
      return (-1);
    }
  return (0);
}

int	check_row(char **tab, int row)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (tab[i])
    i++;
  if (row > --i)
    {
      my_putstr("Error: this row doesn't exist.\n");
      return (-1);
    }
  i = 0;
  while (tab[row][i])
    {
      if (tab[row][i] == '|')
	count++;
      i++;
    }
  if (count == 0)
    {
      my_putstr("Error: this row is empty.\n");
      return (-1);
    }
  return (0);
}
