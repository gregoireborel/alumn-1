/*
** xor_functions.c for xor_functions in /home/borel_b//proj/alum-1/v2
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Sun Feb 13 21:44:26 2011 gregoire1 borel
** Last update Sun Feb 13 23:26:59 2011 gregoire1 borel
*/

#include "alum-1.h"

void	modify_xor(char **tab, int row_xor, int count, int nb_matches)
{
  int	res;
  int	temp;

  nb_matches = count_matches(tab, row_xor++);
  if (nb_matches == 0)
    {
      while (nb_matches == 0)
	nb_matches = count_matches(tab, row_xor++);
    }
  temp = row_xor;
  res = count;
  count_tab(tab, 0, 0, 0);
  while (res != 0)
    {
      while (tab[row_xor])
	res = res^count_matches(tab, row_xor++);
      row_xor = temp;
      if (res != 0)
	{
	  if (res != 0 && count == nb_matches)
	    modify_xor(tab, ++row_xor, 0, nb_matches);
	  modify_xor(tab, row_xor, ++count, nb_matches);
	}
    }
  modify_tab(tab, row_xor, nb_matches - count);
}

int	check_xor(char **tab, int res, int row_xor)
{
  int	row;
  int	nb_matches;
  int	matches;
  static int	count;

  count = 0;
  nb_matches = 0;
  if (res != 0)
    {
      modify_xor(tab, row_xor, count, nb_matches);
      return (0);
    }
  else
    {
      row = rand_row(tab);
      matches = rand_matches(tab, row);
      modify_tab(tab, row, matches);
      return (0);
    }
  return (0);
}

void	calcul_xor(char **tab, int row_xor)
{
  int	row;
  int	res;

  row = 0;
  res = count_matches(tab, row++);
  while (tab[row])
    res = res^count_matches(tab, row++);
  check_xor(tab, res, row_xor);
}
