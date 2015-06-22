
#ifndef READFILE_HH_
# define READFILE_HH_

# include <iostream>
# include <fstream>

# include "Picture.hh"
# include "BMP.hh"

class ReadFile
{
public:
	ReadFile();
	~ReadFile();

private:
	Picture		*_pict;
	std::string	 _fileName;
	char		*_theFileInChar;
	std::ifstream _theFile;


public:
	void readTheFile(unsigned int);
	void work(std::string , unsigned int);

};

#endif