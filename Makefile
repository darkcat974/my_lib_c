##
## EPITECH PROJECT, 2022
## unitest
## File description:
## Makefile
##

SRC =   tests/test_strstr.c\
		tests/test_strcmp.c\
		tests/test_my_puts.c\
		tests/test_revstr.c\
		tests/test_openfile.c\
		tests/test_strcat.c\
		tests/test_len.c\
		tests/test_my_str_to_word_array.c

SOME_FLAGS = -lcriterion --coverage -Llib/my -lmy

all:
	make -C lib/my re
	gcc $(SRC) $(SOME_FLAGS)

clean:
	make -C lib/my clean
	rm -rf $(wildcard a-test*)
:
fclean: clean
	make -C lib/my fclean
	rm -rf a.out

re: fclean all
