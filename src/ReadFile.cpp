
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

APicture    *ReadFile::getThePictStored()
{
    return _pict;
}

int ReadFile::askTheFormat()
{
    std::string input;
    std::cout << BRTMAGENTA << "We didn't detect the format of your file,\nplease enter which file it is ['CSV','BMP']\n" << RST << std::endl;
    std::cin >> input ;
    std::cout << YELLOW << "input is : " << input << RST << std::endl;
    
    if (input == "CSV") {
        _pict = new CSV;
    }
    else if (input == "BMP") {
        _pict = new BMP;
    }
    else {
        std::cout << BLINK << BRTWHITE << BRTBKGRED << "!!!" << STOPBLINK <<  "unrecognized file format, it is going to crash :-/ " << RST << std::endl;
    }

    return 0;
}

void ReadFile::readTheFile(unsigned int coef)
{
    std::cout << "dans read the file :\n ";
    std::cout << "en char " << _theFileInChar[0] << " en unsigned char " << (unsigned char)_theFileInChar[0] << " en int : " << (int)_theFileInChar[0] << std::endl;
    std::cout << "en char " << _theFileInChar[1] << " en unsigned char " << (unsigned char)_theFileInChar[1] << " en int : " << (int)_theFileInChar[1] << std::endl;
    std::cout << "en char " << _theFileInChar[2] << " en unsigned char " << (unsigned char)_theFileInChar[2] << " en int : " << (int)_theFileInChar[2] << std::endl;
    std::cout << "en char " << _theFileInChar[3] << " en unsigned char " << (unsigned char)_theFileInChar[3] << " en int : " << (int)_theFileInChar[3] << std::endl;
    
    std::string magicNumbrChar = "";
    magicNumbrChar += _theFileInChar[0];
    magicNumbrChar += _theFileInChar[1];
    magicNumbrChar += _theFileInChar[2];
    std::cout << WHITE << "le magic number en char " << magicNumbrChar << std::endl;
    if (_theFileInChar[0] == 0x42 && _theFileInChar[1] == 0x4D)
        _pict = new BMP;
    else if (magicNumbrChar.compare("CSV") == 0) {
        std::cout << MAGENTA << "c'est du csv !" << std::endl;
        _pict = new CSV;
    }
    else
    {
        std::cout << BLINK << BRTWHITE << BRTBKGRED << "!!!" << STOPBLINK <<  "il y a eu un probleme lors de la lecture du magic number et ca risque de planter " << RST << std::endl;
        this->askTheFormat();
    }

    _pict->getThePicture(_theFile, coef);
    std::cout << "\x1B[96m\x1B[104mThe pict store in memory in a APicture object\n\x1B[0m\x1B[49m" << *_pict << std::endl;
}

void ReadFile::work(std::string name, unsigned int coef)
{
	std::streampos size;
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
    	readTheFile(coef);
        /*for (int i = 0; i < size; i++)
        {
    	   std::cout << (int)_theFileInChar[i] << "; ";
           if (i % 16 == 0)
            std::cout << std::endl;
        }*/
    	_theFile.close();
        myFile.write (_theFileInChar, size);
    	delete[] _theFileInChar;
	}

}
