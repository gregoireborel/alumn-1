/*
** computer_game.c for computer_game in /home/borel_b//proj/alum-1/v2
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Sun Feb 13 22:43:49 2011 gregoire1 borel
** Last update Sun Feb 13 21:45:17 2011 gregoire1 borel
*/

#include <unistd.h>
#include "alum-1.h"

void	computer_turn(char **tab, int flag)
{
  int	row_xor;

  row_xor = 0;
  if (flag == 0)
    flag = 1;
  else
    flag = 0;
  if ((check_tab_computer(tab, flag) == 1))
    {
      sleep(3);
      choose_option();
    }
  my_putstr("\nWait for the IA's turn.\n");
  sleep(2);
  calcul_xor(tab, row_xor);
}

void	player_vs_computer(char **tab, int flag)
{
  char	*line;
  char	buffer[BUFFER_SIZE];
  int	row;
  int	matches;

  my_putstr("\nIt's your turn!\n");
  my_putstr("\nSelect a row: ");
  line = xread(buffer);
  if ((check_line(line) == -1))
    player_vs_computer(tab, flag);
  row = atoi(line);
  if ((check_row(tab, row) == -1))
    player_vs_computer(tab, flag);
  my_putstr("How many matches do you want to remove? ");
  line = xread(buffer);
  if ((check_line_special_char(tab, line, row) == -1))
    player_vs_computer(tab, flag);
  matches = atoi(line);
  if ((check_matches(tab, row, matches) == -1))
    player_vs_computer(tab, flag);
  modify_tab(tab, row, matches);
  computer_turn(tab, flag);
  player_vs_computer(tab, flag);
}

void	computer_game()
{
  char	**tab;
  int	flag;
  char	buffer[BUFFER_SIZE];

  flag = 0;
  my_putstr("Enter the number of rows: ");
  tab = make_tab(buffer);
  aff_tab(tab);
  player_vs_computer(tab, flag);
}
