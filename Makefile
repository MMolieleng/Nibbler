# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/19 08:39:37 by mmoliele          #+#    #+#              #
#    Updated: 2017/06/22 19:41:24 by mmoliele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = nibbler

SRC = main.cpp\
	  Snake.cpp\
	  Graphics.cpp\
	  Point.cpp\

OBJS = $(SRC:.cpp=.o)

CPP = clang++ -Wall -Werror -Wextra

LIBS	= -L ~/.brew/lib

INCS	= -I ~/.brew/include

INCS	+= -I .

LFLAGS	= -lSDL2 #-lSDL_mixer -lSDL_ttf -lSDL_image

all:
	$(CPP) -o $(NAME) $(SRC) $(LFLAGS) $(LIBS) $(INCS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
