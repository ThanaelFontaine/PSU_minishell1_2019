##
## EPITECH PROJECT, 2019
## makefile infin_add
## File description:
## compile lib etc
##

SRC	=	my_compute_factorial_rec.c 	\
		my_compute_power_rec.c 		\
		my_compute_square_root.c	\
		my_getnbr.c					\
		my_putchar.c				\
		my_put_nbr.c				\
		my_putstr.c					\
		my_printf.c					\
		my_printf2.c				\
		my_printf3.c				\
		my_revstr.c					\
		my_strcat.c					\
		my_strcmp.c					\
		my_strcpy.c					\
		my_strdup.c					\
		my_strlen.c					\
		my_strncat.c				\
		my_strncmp.c				\
		my_str_to_word_array.c		\
		my_strncpy.c				\
		my_strtol.c					\
		my_putnbr_base.c			\
		my_strndup.c				\
		compter_avant.c				\
		compter_caractere.c			\
		clean_string.c				\

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc libmy.a $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all