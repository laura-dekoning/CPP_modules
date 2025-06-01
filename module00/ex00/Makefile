# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2025/06/01 16:24:16 by lade-kon      #+#    #+#                  #
#    Updated: 2025/06/01 18:15:40 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++11 -g -fsanitize=address

SRCS	= megaphone.cpp

OBJS	= $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@ echo "${BLUE}$(NAME) compiling...${RESET}"
	 $(CC) $^ $(FLAGS) -o $(NAME)
	@ echo "${GREEN}$(NAME) made!${RESET}"
	
%.o:%.cpp
	 $(CC) $(FLAGS) -c $< -o $@

clean :
	@ rm -rf $(OBJS)
	@ echo "${CYAN}objects removed.${RESET}"

fclean : clean
	@ rm -f $(NAME)
	@ echo "${YELLOW}$(NAME) fcleaned!${RESET}"

re : fclean all

.PHONY: all clean fclean re

## Colours ##
RESET		:= \033[0m
RED			:= \033[1;91m
GREEN		:= \033[1;92m
YELLOW		:= \033[1;93m
BLUE		:= \033[1;94m
PURPLE		:= \033[1;95m
CYAN		:= \033[1;96m
WHITE		:= \033[1;97m
BLACK		:= \033[1;90m