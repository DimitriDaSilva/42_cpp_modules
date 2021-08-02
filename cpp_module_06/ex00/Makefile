# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/11 09:09:39 by dda-silv          #+#    #+#              #
#    Updated: 2021/08/02 14:40:19 by dda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program built
NAME				:=		convert

# List of sources
SRCS				:=		./main.cpp				\
								./detectType.cpp	\
								./printTypes.cpp	\
								./ABase.cpp			\
								./Char.cpp			\
								./Int.cpp			\
								./Float.cpp			\
								./Double.cpp
OBJS				:=		${SRCS:.cpp=.o}

# Compiler
CC					:=		clang++

# Flags - compilation
FLAG_WARNING		:=		-Wall -Wextra -Werror -Wshadow -std=c++98
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

test:						debug
							@ printf "$(_INFO) Start testing $(NAME)\n\n"
							@ printf "Testing wrong input\n\n"
							./$(NAME)
							./$(NAME) "this is a string"
							./$(NAME) ""
							./$(NAME) 2147483648
							./$(NAME) -2147483649
							./$(NAME) 1.17549e-038
							./$(NAME) 3.40282e+038
							./$(NAME) 2.22507e-308
							./$(NAME) 1.79769e+308

							@ printf "\nTesting valid char input\n\n"
							./$(NAME) a
							./$(NAME) .
							./$(NAME) -
							./$(NAME) ')'

							@ printf "\nTesting valid int input\n\n"
							./$(NAME) 0
							./$(NAME) 42
							./$(NAME) -42
							./$(NAME) 2147483647
							./$(NAME) -2147483648

							@ printf "\nTesting valid float input\n\n"
							./$(NAME) nanf
							./$(NAME) -inff
							./$(NAME) +inff
							./$(NAME) 42.0f
							./$(NAME) 42.4219f

							@ printf "\nTesting valid double input\n\n"
							./$(NAME) nan
							./$(NAME) -inf
							./$(NAME) +inf
							./$(NAME) 42.0
							./$(NAME) 42.4219

.PHONY:						all clean fclean re
