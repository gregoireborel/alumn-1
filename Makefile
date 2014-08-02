##
## Makefile for Makefile in /home/borel_b//proj/alum-1
## 
## Made by gregoire1 borel
## Login   <borel_b@epitech.net>
## 
## Started on  Thu Jan 27 14:27:45 2011 gregoire1 borel
##

NAME=	alum-1

CC=	gcc -o

CFLAGS=	-W -Wextra -Wall -pedantic -ansi -O2

RM=	rm -f

SRC=	alum-1.c \
	aff_functions_1.c \
	aff_functions_2.c \
	display_rules.c \
	computer_game.c \
	friend_game.c \
	check_functions.c \
	check_functions_2.c \
	xor_functions.c \
	make_tab.c \
	rand_functions.c \
	count_functions.c \
	str_functions.c \
	x_functions.c

OBJ=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	$(CC) $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ) *~

fclean:	clean
	$(RM) $(NAME)

re:	fclean all