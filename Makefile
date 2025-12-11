# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kel-gher <kel-gher@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/30 14:35:37 by kel-gher          #+#    #+#              #
#    Updated: 2025/12/11 14:51:45 by kel-gher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = -I.
NAME = libftprintf.a

CC = cc 
CFLAGS = -Wall -Wextra -Werror 


SRC = ft_printf.c src/ft_handle.c src/ft_printf_cs.c src/ft_printf_di.c src/ft_printf_ptrhexX.c src/ft_printf_u.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c 
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean :
	rm -f $(OBJ)

	

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus