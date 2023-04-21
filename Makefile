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
		tests/test_is_sep.c\
		tests/test_my_str_to_word_array.c\
		tests/test_arrayadd.c

SOME_FLAGS = -lcriterion --coverage -Llib -lmy

all:
	make -C lib re
	gcc $(SRC) $(SOME_FLAGS)

clean:
	make -C lib clean
	rm -rf $(wildcard a-test*)
:
fclean: clean
	make -C lib fclean
	rm -rf a.out

re: fclean all
