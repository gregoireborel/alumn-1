/*
** make_tab.c for make_tab in /home/borel_b//proj/alum-1/v2
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Sun Feb 13 21:44:02 2011 gregoire1 borel
** Last update Sun Feb 13 21:44:04 2011 gregoire1 borel
*/

#include <stdlib.h>
#include <stdio.h>
#include "alum-1.h"

char	**modify_tab_special_char(char **tab, int row)
{
  int   i;
  int   count;

  i = 0;
  count = 0;
  while (tab[row][i] == ' ')
    i++;
  while (tab[row][i])
    {
      if (tab[row][i] == '|')
        tab[row][i++] = ' ';
      count++;
    }
  return (tab);
}

void	modify_tab(char **tab, int row, int matches)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (tab[row][i] == ' ')
    i++;
  while (count < matches)
    {
      if (tab[row][i] == '|')
	tab[row][i++] = ' ';
      count++;
    }
  aff_tab(tab);
}

char	**make_tab(char *buffer)
{
  char	**tab;
  char	*line;
  int	i;
  int	j;
  int	nb_rangees;
  int	nb_allumettes;

  line = xread(buffer);
  if ((check_line(line) == -1))
    friend_game();
  nb_rangees = atoi(line);
  i = 0;
  nb_allumettes = 1;
  tab = xmalloc(nb_rangees * sizeof(tab));
  while (i < nb_rangees)
    {
      j = 0;
      tab[i] = xmalloc(nb_allumettes * sizeof(tab));
      while (j < nb_allumettes)
	tab[i][j++] = '|';
      i++;
      nb_allumettes += 2;
    }
  tab[i] = '\0';
  return (tab);
}
