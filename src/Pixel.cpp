
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