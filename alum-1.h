/*
** alum-1.h for alum-1 in /home/borel_b//proj/alum-1
** 
** Made by gregoire1 borel
** Login   <borel_b@epitech.net>
** 
** Started on  Thu Jan 27 16:10:06 2011 gregoire1 borel
** Last update Sun Feb 13 23:26:02 2011 gregoire1 borel
*/

#ifndef ALUM1_
# define ALUM1_

#define BUFFER_SIZE 4096

#include <stdlib.h>

void    my_putchar(char c);
int     my_strlen(char *str);
void    my_putstr(char *str);
char    *xread(char *buffer);
void    aff_presentation();
void    aff_options();
void	aff_tab(char **tab);
void	my_putnbr(int nb);
void    computer_game();
void    friend_game();
void	display_rules();
char    **make_tab(char *buffer);
void	modify_tab(char **tab, int row, int matches);
char    **modify_tab_special_char(char **tab, int row);
int     my_strncmp(char *s1, char *s2, int n);
void    *xmalloc(size_t size);
int	choose_option();
int	check_line(char *line);
int	check_row(char **tab, int row);
int	check_matches(char **tab, int row, int matches);
int	check_tab(char **tab, int player);
int	check_tab_computer(char **tab, int flag);
void	player_turn(char **tab, int player);
void	player_vs_computer(char **tab, int flag);
void	computer_turn(char **tab, int flag);
int	change_player(char **tab, int player);
int     check_line_special_char(char **tab, char *line, int row);
int	count_matches(char **tab, int row);
void	modidy_xor(char **tab, int temp, int count, int nb_matches);
void	calcul_xor(char **tab, int temp);
int	check_xor(char **tab, int res, int row_xor);
int	rand_row(char **tab);
int	rand_matches(char **tab, int row);
void    count_tab(char **tab, int row, int i, int count);

#endif /*ALUM1_*/
