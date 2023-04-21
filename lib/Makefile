##
## EPITECH PROJECT, 2023
## B-PSU-200-RUN-2-1-minishell1-florian.dajon
## File description:
## Makefile
##

SRC = $(wildcard my/*.c)

IFLAGS	=	-I ../include

CFLAGS = -W -Wall -Werror -Wextra $(IFLAGS)

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
