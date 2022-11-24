# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/15 18:56:16 by dreijans      #+#    #+#                  #
#    Updated: 2022/11/24 13:23:58 by dreijans      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
SRC = \
ft_printf.c \
print_char.c \
print_nbr.c \
print_hexlow.c \
print_hexup.c \
print_str.c \
print_unsigned.c \
print_pointer.c 
OBJ_FILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
LIB = $(LIBDIR)/libft.a
LIBDIR = Libft

.PHONY: all clear fclean re test

all: $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR) all --quiet
	
$(NAME): $(OBJ_FILES) $(LIB)
		cp $(LIB) $(NAME) 
		ar -src $(NAME) $(OBJ_FILES)

%.o: %.c
		@$(CC) -c $(CFLAGS) -o $@ $^

clean:
		$(RM) $(OBJ_FILES)
		$(MAKE) -C $(LIBDIR) clean 

fclean: 
		$(RM) $(OBJ_FILES)
		$(RM) $(NAME)
		$(MAKE) -C $(LIBDIR) fclean

re: fclean all

test: re 
		gcc *.c -g $(NAME)
		./a.out

# cp als eerst anders copy paste je over je created libftprintf.a file 
