SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:%.cpp=%.o)
NAME = ClapTrap
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)
	
.PHONY: clean fclean all