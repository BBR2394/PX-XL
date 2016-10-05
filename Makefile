
CXX		=	g++
CXXFLAGS	=	-std=c++11	\
			-lpng -L /usr/local/lib/

SRC	=	main.cpp		\
		ReadFile.cpp		\
		Picture.cpp		\
		BMP.cpp			\
		Pixel.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	PX-XL

LFLAGS	=	-lpng -L /usr/local/lib/

all: $(NAME)

$(NAME): $(OBJ) $(CFLAGS)
	$(CXX) -o $(NAME) $(OBJ) $(LFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
