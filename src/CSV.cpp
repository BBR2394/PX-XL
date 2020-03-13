/*
* @Author: Baptiste Bertrand-Rapello
* @Date:   2020-03-11 16:51:17
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2020-03-13 22:25:53
*/

#include "../includes/CSV.hh"

CSV::CSV() : APicture()
{
	std::cout << "un fichier csv a été créé mais vide" << std::endl;
	_fileFormat = eCSV;
}

CSV::CSV(int w, int h) : APicture(w, h, eCSV)
{

}

CSV::CSV(const APicture &pict) : APicture(pict)
{
	_fileFormat = eCSV;
}

CSV::~CSV()
{

}

/* everythning needed for the creation of the file
** if you have to prepare the header or something else
*/
void CSV::createTheFile()
{
	std::cout << "\x1B[35mDans la methode de CSV : createTheFile\x1B[0m" << std::endl;
}


/*
** here where you write the data in the file
*/
void CSV::writeTheFile()
{
	std::cout << "\x1B[35mDans la methode de CSV : writeTheFile\x1B[0m" << std::endl;
}

/*
** here where you collect the data from the file, 
** where you READ it
*/
void CSV::getThePicture(std::ifstream & inFile, unsigned int)
{
	int length = 25;
	//char * buffer = new char [length];
	//inFile.read(buffer, length);

	std::string line = "";
	std::getline(inFile, line);

	std::cout << "\x1B[35mDans la methode de CSV : getThePicture\x1B[0m" << std::endl;
	//std::cout << RED << "le buffer\n" << RST << buffer << std::endl;
	std::cout << CYAN << "le une ligne\n" << RST << line << std::endl;
}

// i think a previous version of getThePicture ^^
void CSV::getPicture(char fileInCharTab, unsigned int)
{
	std::cout << "\x1B[35mDans la methode de CSV : getPicture\x1B[0m" << std::endl;
}

/*
** everything to do here concern when you collect the data from the file
** so from file -> var in object 
*/
void CSV::setDataFromFile(unsigned int)
{
	std::cout << "\x1B[35mDans la methode de CSV : setDataFromFile\x1B[0m" << std::endl;
}