/*
** str_functions.c for str_functions in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:18:52 2011 gregoire1 borel
** Last update Thu Feb 10 10:18:54 2011 gregoire1 borel
*/

#include "alum-1.h"

int     my_strncmp(char *s1, char *s2, int n)
{
  int i;

  i = 0;
  while (s1[i] == s2[i] && i < n)
    {
      if (s1[i] == 0 && i < n)
        return (0);
      i++;
    }
  if (s1[i] < s2[i] && i < n)
    return (-1);
  if (s1[i] > s2[i] && i < n)
    return (1);
  return (0);
}

char    *my_strncpy(char *str, int n)
{
  char  *ret;
  int   i;

  i = 0;
  ret = xmalloc((n + 1) * sizeof(ret));
  while (i <= n)
    {
      ret[i] = str[i];
      i++;
    }
  ret[i] = '\0';
  return (ret);
}
