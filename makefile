NAME = libftprintf.a
# Don't tinker with the rest. Just add the .c files here
# Make sure to include prototype of every .c file added here in libft.h
SRCS = ft_printf.c ft_putchar.c ft_printchar.c ft_printint.c ft_printstr.c ft_printptr.c ft_printunsint.c ft_strlen.c ft_putnbr_base.c ft_printhexa.c ft_printbighexa.c
OBJECTS = $(SRCS:.c=.o)
all: $(NAME)
%.o: %.c
	gcc -Wall -Wextra -Werror -c -o $@ $<
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
t: re
	make clean
	gcc ft_printf.c libftprintf.a
	clear
	./a.out	
.PHONY: all clean fclean re t