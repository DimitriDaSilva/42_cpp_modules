# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/11 09:09:39 by dda-silv          #+#    #+#              #
#    Updated: 2021/07/22 18:16:38 by dda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program built
NAME				:=		point

# List of sources
SRCS				:=		./main.cpp		\
								./Fixed.cpp	\
								./Point.cpp
OBJS				:=		${SRCS:.cpp=.o}

# Compiler
CC					:=		clang++

# Flags - compilation
FLAG_WARNING		:=		-Wall -Wextra -Werror
FLAG_INC			:= 		-I.
FLAG_DEBUG			:= 		-g
FLAGS_COMP			:= 		$(FLAG_WARNING) $(FLAG_INC) $(FLAG_DEBUG)

# Flags - memory leak check
FLAG_MEM_LEAK		:= 		-fsanitize=address

# Others commands
RM					:=		rm -rf

# Color Code and template code
_YELLOW				:=		\e[38;5;184m
_GREEN				:=		\e[38;5;46m
_RESET				:=		\e[0m
_INFO				:=		[$(_YELLOW)INFO$(_RESET)]
_SUCCESS			:=		[$(_GREEN)SUCCESS$(_RESET)]

# General functions
all:						init $(NAME)
							@ printf "$(_SUCCESS) Compilation done\n"

init:
							@ printf "$(_INFO) Initialize $(NAME)\n"

$(NAME):					$(OBJS)
							@ $(CC) $(FLAGS_COMP) -o $@ $(OBJS)

.cpp.o:
							@ $(CC) $(FLAGS_COMP) -c $< -o $@

clean:
							@ $(RM) $(OBJS)
							@ printf "$(_INFO) Deleted files and directory\n"

fclean:						clean
							@ $(RM) $(NAME)

re:							fclean all

# Debugging functions

debug:						FLAGS_COMP += $(FLAG_MEM_LEAK)
debug:						re


.PHONY:						all clean fclean re
