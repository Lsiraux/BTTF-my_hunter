##
## EPITECH PROJECT, 2021
## Graphical
## File description:
## Makefile
##

SRC    =    ./src/main.c    \
        ./src/rect.c    \
        ./src/sprite_move.c    \
		./src/my_strcat.c \
		./src/my_strlen.c \
		./src/my_put_nbr.c \
		./src/my_putchar.c \
		./src/my_putstr.c \
		./src/init.c \
		./src/init_vect.c \
		./src/init_second.c \
		./src/hit_duck.c \

OBJ    =    $(SRC:.c=.o)

NAME    =    my_runner

CFLAGS    =    -I./include -g3

all:    $(NAME)

$(NAME):    $(OBJ)
		gcc -o $(NAME) $(OBJ) -g3 -lcsfml-graphics -lcsfml-window -lcsfml-system $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:    clean
	rm -f $(NAME)

re:    fclean all
