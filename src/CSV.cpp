/*
* @Author: Baptiste Bertrand-Rapello
* @Date:   2020-03-11 16:51:17
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2020-03-11 16:58:22
*/

#include "../includes/CSV.hh"

CSV::CSV() : APicture()
{
	std::cout << "un fichier csv a été créé mais vide" << std::endl;
	_fileFormat = eCSV;
}

CSV::~CSV()
{

}