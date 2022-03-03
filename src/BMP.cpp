/**
 * Fichier créé il y a fort longtemps 
 * Par Baptiste BERTRANd-RAPELLO
 * */

#include <chrono>
#include <thread>

#include "../includes/BMP.hh"

BMP::BMP() : APicture()
{
	_fileFormat = eBMP;
}

BMP::BMP(int w, int h) : APicture(w, h, eBMP)
{

}

BMP::BMP(const APicture &pict) : APicture(pict)
{

}

BMP::~BMP()
{

}

/*
** Attention
** c'est du 32 bits et 4 couleurs par pixel
** se sera a modifier car il ne gere pas l'alpha le bmp
** enfin je crois ...
*/

void BMP::createTheFile()
{
	_bmpHeader.magic = 0x4D42;
	_bmpHeader.size = (_height * _width * 4) +  sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
	_bmpHeader._app1 = 0;
	_bmpHeader._app2 = 0;
	_bmpHeader.offset = sizeof(t_bmp_header) + sizeof(t_bmp_info_header);

	_bmpInfoHeader.size = sizeof(t_bmp_info_header);//40;
	_bmpInfoHeader.width = _width;
	_bmpInfoHeader.height = _height;
	_bmpInfoHeader.planes = 1;
	_bmpInfoHeader.bpp = 32;
	_bmpInfoHeader.compression = 0;
	_bmpInfoHeader.raw_data_size = _width * _height * 4;
	_bmpInfoHeader.h_resolution = 0;
	_bmpInfoHeader.v_resolution = 0;
	_bmpInfoHeader.palette_size = 0;
	_bmpInfoHeader.important_colors = 0;
}

void BMP::writeTheFile()
{
	unsigned int c = 0;
	std::list<Pixel*>::iterator it;
	unsigned char color;
	unsigned int p = 0;

	it = _thePixels.begin();
	it++;
	//createTheFile();
	_theFile.open("sortie.bmp", std::ios::out | std::ios::binary);
	if (_theFile.is_open())
  	{
  		std::cout << "je vais ecrire" << std::endl;
  		//write()
   		_theFile.write((char*)&_bmpHeader, sizeof(t_bmp_header));
   		_theFile.write((char*)&_bmpInfoHeader, sizeof(t_bmp_info_header));
   		while (!_thePixels.empty())
   			{

   				color = _thePixels.front()->getRed();
   				_theFile.write((char*)&color, sizeof(unsigned char));
   				color = _thePixels.front()->getGreen();
   				_theFile.write((char*)&color, sizeof(unsigned char));
   				color = _thePixels.front()->getBlue();
   				_theFile.write((char*)&color, sizeof(unsigned char));
   				//if (_bmpInfoHeader.bpp/8 == 4)
   				
   					color = _thePixels.front()->getAlpha();
   					_theFile.write((char*)&color, sizeof(unsigned char));
   				
   				_thePixels.pop_front();
   				c++;
   			}
		_theFile.close();
		std::cout << "c = " << c << std::endl;
  	}
  	else 
  		std::cout << "le fichier n'est pas ouvert" << std::endl;
}

void BMP::setDataFromFile(unsigned int coef)
{
	_width = _bmpInfoHeader.width;
	_height = _bmpInfoHeader.height;
	_coefMult = coef;
}

void BMP::getThePicture(std::ifstream &theFile, unsigned int coef)
{
	t_bmp_header *bmpHead;
	t_bmp_info_header *bmpInfHead;
	unsigned int c;
	unsigned char color;
	Pixel *pix;

	theFile.read((char*)&_bmpHeader, sizeof(t_bmp_header));
	theFile.read((char*)&_bmpInfoHeader, sizeof(t_bmp_info_header));

	setDataFromFile(coef);
	std::cout << "avant la lecture" << std::endl;
	std::cout << *this << std::endl;
	std::cout << "width " << _bmpInfoHeader.width << " height " << _bmpInfoHeader.height << std::endl;
	/* attention ne gere pas le 32bits 64 bits */
	std::cout << "c ?? " << c << std::endl;
	c = 0;
	while (c < _bmpInfoHeader.width * _bmpInfoHeader.height)
		{
			theFile.read((char*)&color, sizeof(char));
			pix = new Pixel;
			pix->setRed(color);
			theFile.read((char*)&color, sizeof(char));
			pix->setGreen(color);
			theFile.read((char*)&color, sizeof(char));
			pix->setBlue(color);
			//if (_bmpInfoHeader.bpp/8 == 4)
			
				theFile.read((char*)&color, sizeof(char));
				pix->setAlpha(color);
			
			//else
			//	pix->setAlpha(0);
			_thePixels.push_back(pix);
			c += 1;
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
			std::cout << "ici" << *pix << std::endl;
		}
	std::cout << "la liste a une taille de : " << _thePixels.size() << " et le c : " << c  << std::endl;
	//up 2020-03-13 c'est juste pour tester ce que je lie est bien et c'est bon 
	writeTheFile();
}

static unsigned char *convertFileData(char *tab)
{
	// for (int i = 0; i < 14; i++)
	// {

	// }
	return NULL;
}

void BMP::getPicture(char *fileInCharTab, unsigned int coef)
{
	/* i dont know any more what it is for */
	// unsigned char *tabcpy;
	// convertFileData(fileInCharTab);
	// tabcpy = new unsigned char;
	// theFile.read((char*)&_bmpHeader, sizeof(t_bmp_header));
	// theFile.read((char*)&_bmpInfoHeader, sizeof(t_bmp_info_header));
	// setDataFromFile(coef);

}