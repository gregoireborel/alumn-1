/*
** x_functions.c for x_functions in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:19:04 2011 gregoire1 borel
** Last update Thu Feb 10 10:21:41 2011 gregoire1 borel
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "alum-1.h"

char	*xread(char *buffer)
{
  int	ret;

  ret = read(0, buffer, BUFFER_SIZE - 1);
  if (ret == -1)
    {
      my_putstr("Reading problem\n");
      exit(EXIT_FAILURE);
    }
  else if (ret == 0)
    {
      my_putchar('\n');
      exit(0);
    }
  else if (buffer[0] == '\n' || ret == 1)
    {
      buffer[ret]  = '\0';
      return (buffer);
    }
  else
    buffer[ret - 1] = '\0';
  return (buffer);
}

void    *xmalloc(size_t size)
{
  char	*ptr;

  ptr = NULL;
  ptr = malloc(size * sizeof(ptr));
  if (ptr == NULL)
    exit(EXIT_FAILURE);
  return (ptr);
}
