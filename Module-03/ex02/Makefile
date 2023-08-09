
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = FragTrap
CPPF = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VGLAG) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(GPP) $(CFLAGS) $(VFLAG) -c $^

fclean:
	rm -rf $(NAME) $(SRCS)

re: fclean all
