NAME = account
CPP = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC_FILES = tests.cpp \
			Account.cpp

OBJS = $(SRC_FILES:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CPP) -c $(CFLAGS)  $^

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re lib