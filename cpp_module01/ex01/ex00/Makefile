SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:%.cpp=%.o)
NAME = zombie
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) zombie
	
.PHONY: clean fclean all
	




























