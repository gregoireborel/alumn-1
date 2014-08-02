/*
** alum-1.c for alum-1 in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:17:18 2011 gregoire1 borel
** Last update Sun Feb 13 23:06:04 2011 gregoire1 borel
*/

#include <stdlib.h>
#include <time.h>
#include "alum-1.h"

int	choose_option()
{
  char	*line;
  char	buffer[BUFFER_SIZE];

  aff_options();
  my_putstr("\nChoice: ");
  line = xread(buffer);
  if (my_strncmp(line, "1", my_strlen(line)) == 0)
    friend_game();
  else if (my_strncmp(line, "2", my_strlen(line)) == 0)
    computer_game();
  else if (my_strncmp(line, "3", my_strlen(line)) == 0)
    display_rules();
  else if (my_strncmp(line, "4", my_strlen(line)) == 0)
    exit(EXIT_SUCCESS);
  else
    {
      my_putstr("\nError: you must enter a number comprised between 1 and 4.\n\n");
      choose_option(buffer);
    }
 return (0);
}

int	main(int argc, char **argv)
{
  (void) argv;
  if (argc > 1)
    {
      my_putstr("Too many arguments.\n");
      return (1);
    }
  srand(time(NULL));
  aff_presentation();
  choose_option();
  return (0);
}
