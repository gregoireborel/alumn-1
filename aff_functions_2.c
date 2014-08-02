/*
** aff_functions_2.c for aff_functions_2 in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:17:03 2011 gregoire1 borel
** Last update Thu Feb 10 10:23:13 2011 gregoire1 borel
*/

#include "alum-1.h"

void	aff_tab(char **tab)
{
  int	i;
  int	nb;
  int	space;
  int	interval;

  i = 0;
  nb = 0;
  space = 0;
  interval = 0;
  my_putchar('\n');
  while (tab[space])
    space++;
  while (tab[i])
    {
      my_putnbr(nb++);
      my_putchar('\t');
      while (interval++ != space)
	my_putchar(' ');
      interval = 0;
      space--;
      my_putstr(tab[i++]);
      my_putchar('\n');
    }
}

void	my_putnbr(int nb)
{
  if (nb < 0)
    my_putchar('-');
  else
    nb = -nb;
  if (nb < -9)
    my_putnbr(- (nb / 10));
  my_putchar('0' + - (nb % 10));
}
