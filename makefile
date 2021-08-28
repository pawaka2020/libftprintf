NAME = libftprintf.a
all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c src/*.c
	mv *.o obj/
	ar rcs $(NAME) obj/*.o
clean:
	rm -f obj/*.o
fclean: clean
	rm -f $(NAME)
re: fclean all
t: re
	make clean
	gcc src/ft_printf.c libftprintf.a
	clear
	./a.out	
.PHONY: all clean fclean re t