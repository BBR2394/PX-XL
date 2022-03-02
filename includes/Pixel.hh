
#ifndef PIXEL_HH_
# define PIXEL_HH_

#include <iostream>
#include <list>

# include "color_term_macro.h"

class Pixel
{
public:
	Pixel();
	~Pixel();

private:
	unsigned char	_red;
	unsigned char	_green;
	unsigned char 	_blue;
	unsigned char 	_alpha;

public:
	void setRed(unsigned char );
	void setGreen(unsigned char );
	void setBlue(unsigned char );
	void setAlpha(unsigned char );
	unsigned char getRed() const; 
	unsigned char getGreen() const; 
	unsigned char getBlue() const; 
	unsigned char getAlpha() const; 
	std::list<Pixel*> multiplePixel(int);
};

std::ostream& operator<<(std::ostream &, Pixel const &);


#endif