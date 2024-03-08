NAME = push_swap
BONUS = checker
LIBFT = libft.a
SRC = push_swap.c index_funcs.c lists.c \
				check_args.c swap.c push.c stacks.c \
				rotate.c reverse_rotate.c sort_big.c sort_small.c utils.c
OBJ = ${SRC:.c=.o}

CC			= cc
CFLAGS		= -Wall -Werror -Wextra
INCLUDE = -I include
RM = rm -rf

all:	$(NAME)

$(NAME) : $(OBJ)
		@make -C libft
		@$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) libft/$(LIBFT) -o $(NAME)
		@echo Compilation Finish

clean : 
		@make clean -C libft
		${RM} ${OBJ}
		${RM} ${BONUS_OBJ}

fclean : clean
		@make fclean -C libft
		${RM} $(NAME)
		$(RM) $(BONUS)
		@${RM} $(LIBFT)

re: fclean all

.PHONY:		all clean fclean re