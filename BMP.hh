
#ifndef BMP_HH_
# define BMP_HH_

#include <cstdint>

#include "Picture.hh"

typedef struct  __attribute__((packed)) s_bmp_header
{
  int16_t       magic;
  uint32_t      size;
  int16_t       _app1;
  int16_t       _app2;
  uint32_t      offset;
}               t_bmp_header;

typedef struct  __attribute__((packed)) s_bmp_info_header
{
  uint32_t      size;
  uint32_t      width;
  uint32_t      height;
  uint16_t      planes;
  uint16_t      bpp;
  uint32_t      compression;
  uint32_t      raw_data_size;
  uint32_t      h_resolution;
  uint32_t      v_resolution;
  uint32_t      palette_size;
  uint32_t      important_colors;
}               t_bmp_info_header;

class BMP : public Picture
{
public:
	BMP();
	BMP(int w, int h);
	BMP(const BMP &);
	~BMP();

private:
	t_bmp_header 		_bmpHeader;
	t_bmp_info_header 	_bmpInfoHeader;

public:
	void createTheFile();
	void writeTheFile();
	void getThePicture(std::ifstream &, unsigned int);
	void setDataFromFile(unsigned int);
};

//std::ostream& operator<<(std::ostream&, BMP const &);

#endif