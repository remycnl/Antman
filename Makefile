##
## EPITECH PROJECT, 2022
## Rémy - Canal
## File description:
## Makefile
##

SRC		=       src/main.c \
				src/compress_ppm.c \
				src/read_file.c \
				src/my_functions.c \
				src/my_creates.c \
				src/compress_data.c \
				src/my_putchar.c \
				src/my_putstr.c

CFLAGS	=		-Wall -Wextra -g3

CC      =       gcc -o antman

OBJ     =   	$(SRC:.c=.o)

NAME    =   	makefile_antman

$(NAME):	$(OBJ)
	$(CC) $(SRC) $(CFLAGS)

clean:
	rm $(OBJ)

fclean: clean
	rm antman

all:	$(NAME)

re: fclean all
