//
// Picture.cpp for  in /home/bbr2394/Documents/projets++Mint-2015/PXLart
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jun 18 15:39:15 2015 Bertrand-Rapello Baptiste
// Last update Thu Jun 18 15:39:24 2015 Bertrand-Rapello Baptiste
//

#include "Picture.hh"

Picture::Picture() : _width(-1), _height(-1), _fileFormat(Picture::NOFORMAT)
{

}

Picture::Picture(int w, int h , FORMAT ff) : _width(w), _height(h), _fileFormat(ff)
{
}

Picture::Picture(const Picture &dd)
{
	_width = dd._width;
	_height = dd._height;
	_fileFormat = dd._fileFormat;
}

Picture::~Picture()
{
}

void Picture::setWidth(int w)
{
	_width = w;
}

void Picture::setHeight(int h)
{
	_height = h;
}

void Picture::setFormat(FORMAT ff)
{
	_fileFormat = ff;
}

int Picture::getWidth() const
{
	return _width;
}

int Picture::getHeight() const
{
	return _height;
}

Picture::FORMAT Picture::getFileFormat() const
{
	return _fileFormat;
}

Picture &Picture::operator=(Picture const & dd)
{
	_width = dd._width;
	_height = dd._height;
	_fileFormat = dd._fileFormat;

	return *this;
}

std::ostream & operator<<(std::ostream & os, Picture const & pict)
{
	os << "Picture : \n\twidth -> " << pict.getWidth() << "\n\tHeight -> " << pict.getHeight() << "\n\tFile Fomat -> ";
	if (pict.getFileFormat() == Picture::NOFORMAT)
		os << " no format set yet" ;
	else if (pict.getFileFormat() == Picture::BMP)
		os << "BMP" ;
	else if (pict.getFileFormat() == Picture::TIFF)
		os << "TIFF" ;
	return os;
}