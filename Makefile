##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile my program
##

SRC	=	src/intersection_utils.c	\
		src/intersection.c		\
		src/objects_functions.c		\
		src/main.c

OBJ	=	$(SRC:.c=.o)

TESTS	=	tests/test_intersection.c	\
		src/intersection_utils.c	\
		src/intersection.c		\
		src/objects_functions.c

NAME	=	104intersection

CFLAGS	=	-W -Wall -Wextra

CPPFLAGS	=	-I include/

LDFLAGS	=	-lm

UNITFLAGS	=	-lcriterion --coverage

EXECTESTS	=	unit_tests

CC	=	gcc

all:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run:
	$(CC) $(TESTS) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(UNITFLAGS) -o $(EXECTESTS)
	./$(EXECTESTS) && gcovr

clean:
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	rm -f $(NAME)
	rm -f $(EXECTESTS)

re:	fclean all

.PHONY: all clean fclean re
