##
## EPITECH PROJECT, 2019
## makefile
## File description:
## ######
##

SRC		=	core_dump.c				\
			setenv_and_other.c		\
			delete_elem_at_back.c 	\
			main.c					\
			command.c				\
			ad_node_at_back.c		\
			loop_of_the_shell.c		\
			documentation.c			\
			mini_shell.c			\

NAME	=	mysh

LIBRARY = 	make -C lib/my

CFLAGS	=	-W -Wall -Wextra -g3

all:		$(NAME)

$(NAME):
			$(LIBRARY)
			gcc -o $(NAME) $(CFLAGS) $(SRC) -L ./lib/my/ -lmy
clean:
			$(LIBRARY) clean

fclean:		clean
			rm -f $(NAME)
			$(LIBRARY) fclean

re:			fclean all