##
## EPITECH PROJECT, 2022
## rush2
## File description:
## Makefile
##

SRC	= 	$(wildcard *.c)

IFLAGS	=	-I ../include

CFLAGS = -W -Wall -Werror -Wextra $(IFLAGS)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
