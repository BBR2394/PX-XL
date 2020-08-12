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

#include "../includes/ReadFile.hh"
#include "../includes/APicture.hh"
#include "../includes/BMP.hh"
#include "../includes/CSV.hh"
#include "../includes/Test.hh"
#include "../includes/ProcessPicture.hpp"

int	main(int ac, char **av)
{
  TestPXXL test;
  BMP bmp(64, 64);
  ReadFile rf;
  int coefOfElargement = 10;

  //std::cout << bmp << std::endl;  
  if (ac <= 1)
  {
  	std::cout << "No File ..." << std::endl;
  	std::cout << "usage \n\t-> ./PX-XL [path to the file .bmp]" << std::endl;
  	return -1;
  }

  rf.work(av[1], coefOfElargement);
  APicture *storedPict = rf.getThePictStored();
  std::cout << "dans le main " << *storedPict << std::endl;
  
  CSV *csvObj = new CSV(*storedPict);
  std::cout << "dans le main " << *csvObj << std::endl;

  //test.runTest();

  //bmp.createTheFile();
  //bmp.writeTheFile();
  ProcessPicture procPict;
  procPict.processThePicture();
  return 0;
}
