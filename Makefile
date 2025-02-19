#Variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_handle_conversion.c ft_print_char.c ft_print_hex.c ft_print_nbr.c ft_print_pointer.c\
	ft_print_str.c ft_print_unsigned.c ft_printf.c
OBJ = $(SRC:%.c=%.o)

INCLUDES = -Ilibft

#Reglas
all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDES)	-c $< -o $@

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME) $(OBJ)

re: fclean all
