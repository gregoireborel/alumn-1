/*
** friend_game.c for friend_game in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Feb 10 10:18:25 2011 gregoire1 borel
** Last update Thu Feb 10 13:29:46 2011 gregoire1 borel
*/

#include <unistd.h>
#include <stdlib.h>
#include "alum-1.h"

int	change_player(char **tab, int player)
{
  if (player == 1)
    player = 2;
  else
    player = 1;
  if ((check_tab(tab, player) == 1))
    {
      sleep(3);
      choose_option();
    }
  return (player);
}

void	player_turn(char **tab, int player)
{
  char	*line;
  char	buffer[BUFFER_SIZE];
  int	row;
  int	matches;

  my_putstr("\nIt's player ");
  my_putnbr(player);
  my_putstr(" 's turn!");
  my_putstr("\nSelect a row: ");
  line = xread(buffer);
  if ((check_line(line) == -1))
   player_turn(tab, player);
  row = atoi(line);
  if ((check_row(tab, row) == -1))
    player_turn(tab, player);
    my_putstr("How many matches do you want to remove? ");
  line = xread(buffer);
  if ((check_line_special_char(tab, line, row) == -1))
    player_turn(tab, player);
  matches = atoi(line);
  if ((check_matches(tab, row, matches) == -1))
    player_turn(tab, player);
  modify_tab(tab, row, matches);
  player = change_player(tab, player);
  player_turn(tab, player);
}

void	friend_game()
{
  char	**tab;
  char	buffer[BUFFER_SIZE];
  int	player;

  player = 1;
  my_putstr("Enter the number of rows: ");
  tab = make_tab(buffer);
  aff_tab(tab);
  player_turn(tab, player);
}
