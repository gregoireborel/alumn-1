/*
** rand_functions.c for rand_functions in /home/borel_b//proj/alum-1/v2
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Sun Feb 13 21:44:13 2011 gregoire1 borel
** Last update Sun Feb 13 21:45:28 2011 gregoire1 borel
*/

#include <stdlib.h>
#include "alum-1.h"

int	rand_row(char **tab)
{
  int	row;
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (tab[i])
    i++;
  row = rand()%(i - 0) + 0;
  i = 0;
  while (tab[row][i])
    {
      if (tab[row][i] == '|')
	count++;
      i++;
    }
  if (count == 0)
    rand_row(tab);
  return (row);
}

int	rand_matches(char **tab, int row)
{
  int	matches;
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
  count++;
  matches = rand()%(count - 0) + 0;
  if (matches == 0)
    rand_matches(tab, row);
  return (matches);
}
