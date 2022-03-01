
#include "../Png.hh"


PNG::PNG() {
    std::cout << "base constructor PNG " << std::endl;
}

PNG::PNG(int w, int h) {
    std::cout << "constructor PNG with x and y" << std::endl;
}

PNG::PNG(const PNG &) {
    std::cout << "constructor par copie de reference PNG " << std::endl;
}

PNG::~PNG() {
    std::cout << "desconstructor PNG " << std::endl;
}

void PNG_SYS::createTheFile() {

}

void PNG_SYS::createTheFile() {

}

void PNG_SYS::getThePicture(std::ifstream &, unsigned int) {

}

void PNG_SYS::getPicture(char *, unsigned int) {

}

void PNG_SYS::setDataFromFile(unsigned int) {
    
}