
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = PhoneBook
CPPF = 	Contact.cpp \
		PhoneBook.cpp \
		main.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VGLAG) $(CFLAGS) $? -o $@

clean:
	rm -rf $(NAME) $(SRCS)

re: clean all
