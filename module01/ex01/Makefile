NAME = Moar_brainz

cpp = c++

FLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = main.cpp Zombie.cpp zombieHorde.cpp

header = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(cpp) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(header)
	$(cpp) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
