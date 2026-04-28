CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRCS = megaphone.cpp

OBJ_DIR	= objs

OBJS		= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# Default rule to build and run the executable
all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean f: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
