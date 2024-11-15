# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 16:09:24 by lottavi           #+#    #+#              #
#    Updated: 2024/11/15 16:31:09 by lottavi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98
TARGET = build/replace
SRC = main.cpp FileReplacer.cpp
OBJ = $(SRC:%.cpp=build/bin/%.o)

all: $(TARGET)

build/bin/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJ)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

clean:
	rm -rf build/bin

fclean: clean
	rm -f $(TARGET)

re: fclean all
