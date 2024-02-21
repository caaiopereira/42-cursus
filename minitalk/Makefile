SERVER = server.c
CLIENT = client.c
NAME = minitalk.a

all:$(NAME)

$(NAME):
	@$(MAKE) -C ./printf/
	@$(MAKE) -C ./libft/
	@ar -r ./libft/libft.a ./printf/*.o
	@cp ./libft/libft.a ./
	@mv libft.a $(NAME)
	@cc client.c $(NAME) -o client
	@cc server.c $(NAME) -o server
	@echo "Server and Client create."

clean:
	@$(MAKE) clean -C ./printf/
	@$(MAKE) clean -C ./libft/

fclean: clean
	@$(MAKE) fclean -C ./printf/
	@$(MAKE) fclean -C ./libft/
	@rm -rf $(NAME) server client
	@echo "All files deleted."

re: fclean all
