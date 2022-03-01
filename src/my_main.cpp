
#include <iostream>
#include "mychainedstack.h"

int main()
{
	std::cout << "here is where the magik happen !" << std::endl;

	mychainedstack _mystack;

	_mystack.push(42);

	std::cout << "my stack fait:\n" << _mystack << std::endl;	

}