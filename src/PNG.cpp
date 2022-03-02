
#include "../includes/Png.hh"


PNG::PNG() {
    std::cout << "base constructor PNG " << std::endl;
}

PNG::PNG(int w, int h) : APicture(w, h, ePNG) {
    std::cout << "constructor PNG with x and y" << std::endl;
}

PNG::PNG(const PNG &pict)  : APicture(pict) {
    std::cout << "constructor par copie de reference PNG " << std::endl;
}

PNG::~PNG() {
    std::cout << "desconstructor PNG " << std::endl;
}

void PNG::createTheFile() {

}

void PNG::writeTheFile() {

}

void PNG::getThePicture(std::ifstream &, unsigned int) {

}

void PNG::getPicture(char *, unsigned int) {

}

void PNG::setDataFromFile(unsigned int) {
    
}