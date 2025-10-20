# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2025/06/23 13:24:16 by lade-kon      #+#    #+#                  #
#    Updated: 2025/10/15 11:20:10 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		:=	FragTrap

CC			:=	c++
FLAGS		:=	-Wall -Wextra -Werror -std=c++11 -g -fsanitize=address

INCL		:=	incl
INCLUDES	:=	-I $(INCL)

SRC_DIR		:=	src
SRC_FILES	:=	ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				main.cpp

SRC			:=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR		:=	obj
OBJ_FILES	:=	$(SRC_FILES:.cpp=.o)
OBJ			:=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

all : $(NAME)

$(NAME) : $(OBJ)
	@ echo "${BLUE}$(NAME) compiling...${RESET}"
	 $(CC) $^ $(FLAGS) $(INCLUDES) -o $(NAME)
	@ echo "${GREEN}$(NAME) made!${RESET}"

$(OBJ_DIR):
	@echo "${PURPLE}Making object directories${RESET}"
	mkdir -p $(OBJ_DIR)
	@echo "${GREEN}Completed${RESET}"

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp | $(OBJ_DIR)
	 $(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean :
	@ rm -rf $(OBJ)
	@ echo "${CYAN}objects removed.${RESET}"

fclean : clean
	@ rm -rf $(OBJ_DIR)
	@ echo "${GREEN}Object folder deleted.${RESET}"
	@ rm -f $(NAME)
	@ echo "${YELLOW}$(NAME) is gone!${RESET}"

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