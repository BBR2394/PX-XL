/*
* @Author: Baptiste Bertrand-Rapello
* @Date:   2020-03-11 16:51:17
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2020-03-26 16:50:58
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

void CSV::getTheInformationOnFile() 
{
	
}

/*
** here where you collect the data from the file, 
** where you READ it
*/
//cette methode est appelle au debut dans readfile
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
	std::string splpitFirstLine = line.substr(line.find(';')+1);
	std::cout << CYAN << "lla sub ligne\n" << RST << splpitFirstLine << std::endl;
	// TODO HERE there is a check to do, a try to catch bacause if there is no AND at the end of the file
	std::string infoCSV = splpitFirstLine.substr(0, splpitFirstLine.find("END")-1);
	/*for the example it will give 4+24+8+3;
		first : width
		second : height
		third : bit number
		four : number of "case" (in excel) used for the data, so each number of pixel will be separate by ; : 255;255;255
	*/ 
	std::cout << YELLOW << "lla sub ligne\n" << RST << infoCSV << std::endl;
	std::string temp = infoCSV;
	std::cout << BKGBLUE << BRTWHITE << UNDERLINE << "Les infos du fichier CSV" << std::endl;
	_width = std::stoi(temp.substr(0, temp.find('+')));
	temp = temp.substr(temp.find('+')+1);
	_height = std::stoi(temp.substr(0, temp.find('+')));
	temp = temp.substr(temp.find('+')+1);
	_bits = std::stoi(temp.substr(0, temp.find('+')));
	temp = temp.substr(temp.find('+')+1);
	_nbCases = std::stoi(temp.substr(0, temp.find('+')));

	std::cout << "Width : " << _width << std::endl;
	std::cout << "Height : " << _height << std::endl;
	std::cout << "nb bits : " << _bits << std::endl;
	std::cout << "nb case : " << _nbCases << std::endl;

	std::cout << "temp : " << temp << std::endl;
	std::cout << RST ;

}

// i think a previous version of getThePicture ^^
void CSV::getPicture(char * fileInCharTab, unsigned int)
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