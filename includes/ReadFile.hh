
#ifndef READFILE_HH_
# define READFILE_HH_

# include <iostream>
# include <fstream>
# include <string>

# include "APicture.hh"
# include "BMP.hh"
# include "CSV.hh"

class ReadFile
{
public:
	ReadFile();
	~ReadFile();

private:
	APicture	*_pict;
	std::string	 _fileName;
	char		*_theFileInChar;
	std::ifstream _theFile;


public:
	int askTheFormat();
	APicture *getThePictStored();
	void readTheFile(unsigned int);
	void work(std::string , unsigned int);

};

#endif