
#include "../includes/PNG_sys.hh"

PNG_SYS::PNG_SYS() {
    std::cout << "la c'est un png system" << std::endl;
}

PNG_SYS::PNG_SYS(int w, int h, FORMAT) : APicture(w, h, ePNGsys) {

}

PNG_SYS::PNG_SYS(const APicture &pict)  : APicture(pict) {
    
}

PNG_SYS::~PNG_SYS() {

}

void PNG_SYS::createTheFile() {

}

void PNG_SYS::writeTheFile() {

}

void PNG_SYS::getThePicture(std::ifstream &, unsigned int) {

}

void PNG_SYS::getPicture(char *, unsigned int) {

}

void PNG_SYS::setDataFromFile(unsigned int) {

}