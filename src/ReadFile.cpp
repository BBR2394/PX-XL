
#include "../includes/ReadFile.hh"

ReadFile::ReadFile()
{

}

ReadFile::~ReadFile()
{

}

/*void ReadFile::detectFormat()
{


}*/

void ReadFile::readTheFile(unsigned int coef)
{
    if (_theFileInChar[0] == 0x42 && _theFileInChar[1] == 0x4D)
        _pict = new BMP;
    else
        std::cout << "il y a eu un probleme lors de la lecture du magic number" << std::endl;

    _pict->getThePicture(_theFile, coef);
    std::cout << *_pict << std::endl;
}

void ReadFile::work(std::string name, unsigned int coef)
{
	std::streampos size;;
	_theFile.open(name.c_str(), std::ios::in|std::ios::binary|std::ios::ate);
    std::ofstream myFile ("cpy.bmp", std::ios::out | std::ios::binary);
    
	if (_theFile.is_open())
	{
		size = _theFile.tellg();
    	_theFileInChar = new char [size];
    	_theFile.seekg (0, std::ios::beg);
    	_theFile.read (_theFileInChar, size);
    	_theFile.seekg (0, std::ios::beg);

    	std::cout << "the entire file content is in memory" << std::endl;
    	//readTheFile(coef);
        for (int i = 0; i < size; i++)
        {
    	   std::cout << (int)_theFileInChar[i] << "; ";
           if (i % 16 == 0)
            std::cout << std::endl;
        }
    	_theFile.close();
        myFile.write (_theFileInChar, size);
    	delete[] _theFileInChar;
	}	
}
