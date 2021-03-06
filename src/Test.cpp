/*
* @Author: Baptiste Bertrand-Rapello
* @Date:   2020-03-11 17:01:05
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2020-03-13 16:41:00
*/

#include "../includes/Test.hh"

TestPXXL::TestPXXL()
{
	std::cout << "\033[33m" << "TEST Object created" << "\033[0m" << std::endl;
}

TestPXXL::~TestPXXL()
{
	std::cout << "\033[33m" << "TEST Object destroy" << "\033[0m" << std::endl;
}

int TestPXXL::runTest()
{
	std::cout << "\033[36m" << "TEST is running " << "\033[0m" << std::endl;
	ReadFile rf;
	APicture *storedPict = NULL;
	int coefOfElargement = 10;

	rf.work("testPictures/testUn.csv", coefOfElargement);
	storedPict = rf.getThePictStored();

	return 0;
}