#ifndef CSV_HH_
# define CSV_HH_

#include "APicture.hh"

class CSV : public APicture
{
public:
	CSV();
	CSV(int w, int h);
	CSV(const APicture &);
	~CSV();

private:
	int _test;
	int _nbCases;
	//bits : to put after in APicture
	int _bits;
	void getTheInformationOnFile();

public:
	void createTheFile();
	void writeTheFile();
	void getThePicture(std::ifstream &, unsigned int);
	void getPicture(char *, unsigned int);
	void setDataFromFile(unsigned int);
};

#endif