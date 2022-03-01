
#ifndef PROCESSPICTURE_HPP_
# define PROCESSPICTURE_HPP_

#include <iostream>

class ProcessPicture
{
public:
	ProcessPicture();
	~ProcessPicture();

private:
	int _c;
	int _multiplicaterFactor;

public:
	int processThePicture();
	//ultiplier factor
	void setMultMultiplicaterFactor(int );
	int getMultiplicaterFactor();
};

#endif