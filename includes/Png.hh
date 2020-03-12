#ifndef PNG_HH_
# define PNG_HH_

#include <cstdint>
#include <png.h>

#include "APicture.hh"

class PNG : public Picture
{
public:
	PNG();
	PNG(int w, int h);
	PNG(const PNG &);
	~PNG();

private:

};

#endif