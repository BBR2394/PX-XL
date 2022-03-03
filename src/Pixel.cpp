
#include "../includes/Pixel.hh"

Pixel::Pixel()
{

}

Pixel::~Pixel()
{

}

void	Pixel::setRed(unsigned char r)
{
	_red = r;
}

void Pixel::setGreen(unsigned char g)
{
	_green = g;
}

void Pixel::setBlue(unsigned char b)
{
	_blue = b;
}

void Pixel::setAlpha(unsigned char a)
{
	_alpha = a;
}

unsigned char Pixel::getRed() const
{
	return _red;
}

unsigned char Pixel::getGreen() const
{
	return _green;
}

unsigned char Pixel::getBlue() const
{
	return _blue;
}

unsigned char Pixel::getAlpha() const
{
	return _alpha;
}

// 21 04 21 faut creer un constructeur par copy pour pixel
std::list<Pixel*>	Pixel::multiplePixel(int coef)
{
	std::list<Pixel*> lst;
	return lst;
}

std::ostream& operator<<(std::ostream & os, Pixel const & pxl) {
	os << "Le piXel est composé de :\n";
	os << RED << (int)pxl.getRed() << GREEN << (int)pxl.getGreen() << BLUE << (int)pxl.getBlue() << RST << (int)pxl.getAlpha();
	return os;
}
