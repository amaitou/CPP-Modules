
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = Fixed4
CPPF = 	Fixed.cpp main.cpp bsp.cpp Point.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VFLAG) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(GPP) $(CFLAGS) $(VFLAG) -c $^

fclean:
	rm -rf $(NAME) $(SRCS)

re: fclean all
