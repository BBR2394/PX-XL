
CXX		=	g++
CXXFLAGS	=	-std=c++11	\
			-lpng -L /usr/local/lib/

SRC	=	src/main.cpp			\
		src/Test.cpp			\
		src/ReadFile.cpp		\
		src/APicture.cpp		\
		src/BMP.cpp			\
		src/CSV.cpp			\
		src/Pixel.cpp

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
