# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 09:50:29 by msumon            #+#    #+#              #
#    Updated: 2024/08/19 18:13:35 by msumon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= btc
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
HEADERS		= BitcoinExchange.hpp
SRCS		= main.cpp BitcoinExchange.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -rf

all:	$(NAME)

%.o: %.cpp $(HEADERS)
		$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
        
re:		fclean all

.PHONY: all clean fclean re
