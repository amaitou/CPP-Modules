
GPP = g++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = megaphone
CPPF = megaphone.cpp

all: $(NAME)

$(NAME): $(CPPF)
	$(GPP) $(VGLAG) $(CFLAGS) $? -o $@

clean:
	rm -rf $(NAME)

re: clean all
