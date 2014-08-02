/*
** count_functions.c for count_functions in /home/borel_b//proj/alum-1/v2
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Sun Feb 13 23:02:16 2011 gregoire1 borel
** Last update Sun Feb 13 23:25:13 2011 gregoire1 borel
*/

#include <unistd.h>
#include "alum-1.h"

void    count_tab(char **tab, int row, int i, int count)
{
  while (tab[row])
    {
      i = 0;
      while (tab[row][i])
	{
	  if (tab[row][i] == '|')
	    {
	      count++;
	      i++;
	    }
	  else
	    i++;
	}
      row++;
    }
  if (count == 1)
    {
      my_putstr("\nVous avez gagne !\n");
      sleep(1);
      choose_option();
    }
}

int     count_matches(char **tab, int row)
{
  int   count;
  int   i;

  count = 0;
  i = 0;
  while (tab[row][i])
    {
      if (tab[row][i] == '|')
        count++;
      i++;
    }
  return (count);
}
