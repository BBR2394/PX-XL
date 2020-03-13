//
// Picture.hh for  in /home/bbr2394/Documents/projets++Mint-2015/PXLart
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jun 18 15:39:32 2015 Bertrand-Rapello Baptiste
// Last update Thu Jun 18 15:55:21 2015 Bertrand-Rapello Baptiste
//

#ifndef PICTURE_HH_
# define PICTURE_HH_

#include <iostream>
#include <fstream>
#include <list>

# include "color_term_macro.h"

# include "IPicture.h"
# include "enum_picture.h"
# include "Pixel.hh"

class APicture : public IPicture
{
public:
  APicture();
  APicture(int w, int h, FORMAT);
  APicture(const APicture &);
  ~APicture();
  APicture &operator=(APicture const &);
  
protected:
  int               _width; //largeur
  int               _height; //hauteur
  FORMAT            _fileFormat;
  std::string       _fileName;
  std::ofstream     _theFile;
  std::list<Pixel*> _thePixels;
  unsigned int      _coefMult;
  
public:
  void setWidth(int w);
  void setHeight(int h);
  void setFormat(FORMAT );

  int getWidth() const;
  int getHeight() const;
  FORMAT getFileFormat() const;

  virtual void createTheFile() = 0;
  virtual void writeTheFile() = 0;
  virtual void getThePicture(std::ifstream &, unsigned int) = 0;
  virtual void getPicture(char *, unsigned int) = 0;
  virtual void setDataFromFile(unsigned int) = 0;
};
  
std::ostream& operator<<(std::ostream&, APicture const &);

#endif
