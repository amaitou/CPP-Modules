
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = LetsReplaceStrings
CPPF = main.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VGLAG) $(CFLAGS) $^ -o $@

fclean:
	rm -rf $(NAME) $(SRCS) *.replaced

re: fclean all