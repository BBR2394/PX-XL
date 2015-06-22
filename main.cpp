//
// main.cpp for  in /home/bbr2394/Documents/projets++Mint-2015/PXLart
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Jun 18 15:38:29 2015 Bertrand-Rapello Baptiste
// Last update Thu Jun 18 21:57:36 2015 Bertrand-Rapello Baptiste
//

#include <iostream>

#include "ReadFile.hh"
#include "Picture.hh"
#include "BMP.hh"

int	main(int ac, char **av)
{
  BMP bmp(64, 64);
  ReadFile rf;

  //std::cout << bmp << std::endl;  
  if (ac <= 1)
  {
  	std::cout << "No File ..." << std::endl;
  	std::cout << "usage \n\t-> ./PX-XL [path to the file .bmp]" << std::endl;
  	return -1;
  }

  rf.work(av[1], 3);
  //bmp.createTheFile();
  //bmp.writeTheFile();
  return 0;
}
