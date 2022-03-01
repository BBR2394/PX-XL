/*
* @Author: Baptiste Bertrand-Rapello
* @Date:   2020-07-27 23:46:17
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2020-07-27 23:52:06
*/

#include "../includes/ProcessPicture.hpp"

ProcessPicture::ProcessPicture()
{
	
}

ProcessPicture::~ProcessPicture()
{
	
}

/*
To the me in futur
here we are going to take the picture and iterate on it 
until the width
each time we get the pixel and we copy it in a new APicture
and we do must not forget the line : we have to multiply height AND line
*/
int ProcessPicture::processThePicture()
{
	std::cout << "Here I am going to process the picture" << std::endl;
	return 42;
}

void ProcessPicture::setMultMultiplicaterFactor(int newOne)
{
	_multiplicaterFactor = newOne;

}

int ProcessPicture::getMultiplicaterFactor()
{
	return _multiplicaterFactor;
}