//
// Picture.cpp for  in /home/bbr2394/Documents/projets++Mint-2015/PXLart
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jun 18 15:39:15 2015 Bertrand-Rapello Baptiste
// Last update Thu Jun 18 15:39:24 2015 Bertrand-Rapello Baptiste
//

#include "../includes/APicture.hh"

APicture::APicture() : _width(-1), _height(-1), _fileFormat(eNOFORMAT)
{

}

APicture::APicture(int w, int h , FORMAT ff) : _width(w), _height(h), _fileFormat(ff)
{
}

APicture::APicture(const APicture &dd)
{
	_width = dd._width;
	_height = dd._height;
	_fileFormat = dd._fileFormat;
}

APicture::~APicture()
{
}

void APicture::setWidth(int w)
{
	_width = w;
}

void APicture::setHeight(int h)
{
	_height = h;
}

void APicture::setFormat(FORMAT ff)
{
	_fileFormat = ff;
}

int APicture::getWidth() const
{
	return _width;
}

int APicture::getHeight() const
{
	return _height;
}

FORMAT APicture::getFileFormat() const
{
	return _fileFormat;
}

APicture &APicture::operator=(APicture const & dd)
{
	_width = dd._width;
	_height = dd._height;
	_fileFormat = dd._fileFormat;

	return *this;
}

std::ostream & operator<<(std::ostream & os, APicture const & pict)
{
	os << "APicture : \n\twidth -> " << pict.getWidth() << "\n\tHeight -> " << pict.getHeight() << "\n\tFile Fomat -> ";
	if (pict.getFileFormat() == eNOFORMAT)
		os << " no format set yet" ;
	else if (pict.getFileFormat() == eBMP)
		os << RED << "BMP" << RST;
	else if (pict.getFileFormat() == eTIFF)
		os << GREEN << "TIFF" << RST;
	else if (pict.getFileFormat() == eCSV)
		os << YELLOW << "CSV" << RST;
	else
		os << "\x1B[41m\x1B[97m\x1B[05m!!!\x1B[25mUNDEFINED FORMAT SOMETHING IS MISSING\x1B[0m";
	return os;
}