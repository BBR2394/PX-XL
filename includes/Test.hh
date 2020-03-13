#ifndef TEST_HH_
# define TEST_HH_

#include <iostream>

#include "../includes/ReadFile.hh"
#include "../includes/APicture.hh"
#include "../includes/BMP.hh"
#include "../includes/CSV.hh"
#include "../includes/Test.hh"

class TestPXXL
{
public:
	TestPXXL();
	~TestPXXL();

private:
	int _arguments;

public:
	int runTest();
};

#endif