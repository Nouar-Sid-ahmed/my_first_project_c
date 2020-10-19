C_FLAGS	=	-Wall -Wextra -Werror -std=c11 -I./include/

CC		=	gcc $(C_FLAGS)

NAME	=	my_crd

NAMEB	=	my_crdB

SRC		=	lib/my/cmp_mots.c \
			lib/my/is_alpha_num.c \
			lib/my/my_strlen.c \
			lib/my/my_getnbr.c \
			lib/my/my_putnbr.c \
			lib/my/my_find_node.c \
			lib/my/my_push_front_to_list.c \
			lib/my/my_readline.c \
			lib/my/my_strncpy.c \
			lib/my/my_str_to_word_array.c \
			lib/my/my_putchar.c \
			lib/my/show.c \
			lib/my/how_to_show.c \
			my_crd.c

SRCB	=	lib/my/cmp_mots.c \
            lib/my/is_alpha_num.c \
            lib/my/my_strlen.c \
            lib/my/my_getnbr.c \
            lib/my/my_putnbr.c \
            lib/my/my_find_node.c \
            lib/my/my_push_front_to_list.c \
            lib/my/my_readline.c \
            lib/my/my_strncpy.c \
            lib/my/my_str_to_word_array.c \
            lib/my/my_putchar.c \
            lib/my/show.c \
            lib/my/how_to_show.c \
			lib/Bonus/is_nbr.c \
			lib/Bonus/my_find_error.c \
			lib/Bonus/my_putstr.c \
			lib/Bonus/how_to_show_delete.c \
			lib/Bonus/my_delete_nodes.c \
			lib/Bonus/show_delete.c \
			my_crd2.c

OBJ		=	$(SRC:%.c=%.o)

OBJB	=	$(SRCB:%.c=%.o)

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o my_crd

bonus:		$(NAMEB)

$(NAMEB):	$(OBJB)
			$(CC) $(OBJB) -o my_crdB

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

bclean:
			$(RM) $(OBJB)

bfclean:	bclean
			$(RM) $(NAMEB)

re:			fclean all
