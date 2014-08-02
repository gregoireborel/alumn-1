/*
** display_rules.c for display_rules in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:18:14 2011 gregoire1 borel
** Last update Thu Feb 10 10:26:28 2011 gregoire1 borel
*/

#include <unistd.h>
#include "alum-1.h"

void	display_rules()
{
  my_putstr("\nThere are 4 rows of matches.");
  my_putstr(" Players take turns to remove matches.\n");
  my_putstr("A player can take from 1 to as many matches as he desires,");
  my_putstr(" in a row at a time.");
  my_putstr(" The one who takes the last match lose.\n\n");
  sleep(5);
  choose_option();
  my_putchar('\n');
}
