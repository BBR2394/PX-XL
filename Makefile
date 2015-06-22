
CXX		=	g++
CXXFLAGS	=	-std=c++11

SRC	=	main.cpp		\
		ReadFile.cpp		\
		Picture.cpp		\
		BMP.cpp			\
		Pixel.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	PX-XL

LFLAGS	=	

all: $(NAME)

$(NAME): $(OBJ) $(CFLAGS)
	$(CXX) -o $(NAME) $(OBJ) $(LFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
