# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/15 18:56:16 by dreijans      #+#    #+#                  #
#    Updated: 2022/11/22 16:24:38 by dreijans      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
SRC = \
ft_printf.c \
print_char.c \
print_nbr.c \
print_hexlow.c \
print_hexup.c 
OBJ_FILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g3
#LIBFT_OBJ = $(LIBDIR:.c=.o) 
LIB = $(LIBDIR)/libft.a
LIBDIR = Libft

#dit werkt niet gewoon al je .c files etc handmatig erbij zetten!!!!!
.PHONY: all clear fclean re test

all: $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR) all clean --quiet
	
$(NAME): $(OBJ_FILES) $(LIB)
		ar -src $(NAME) $(OBJ_FILES) $(LIB)

%.o: %.c
		@$(CC) -c $(CFLAGS) -o $@ $^

clean:
		rm -f $(OBJ_FILES)
		$(MAKE) -C $(LIBDIR) clean

fclean: 
		rm -f $(OBJ_FILES)
		rm -f $(NAME) ./a.out 
		$(MAKE) -C $(LIBDIR) fclean  

re: fclean all

test: re # or *.c als je (SRC) zou doen kan het zijn dat niet alles up to dat is
		gcc *.c -g $(NAME) $(LIB)
		./a.out
