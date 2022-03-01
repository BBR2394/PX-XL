/**
 *  créé le 1 Mars at 00:46
 */

#ifndef PNG_SYS_HH_
# define PNG_SYS_HH_

#include "APicture.hh"

class PNG_SYS : public APicture
{
    public:
        PNG_SYS();
        PNG_SYS(int w, int h, FORMAT);
        PNG_SYS(const APicture &);
        ~PNG_SYS();
        PNG_SYS &operator=(APicture const &);

    private:
        int _c;

    public:
        void createTheFile() = 0;
        void writeTheFile() = 0;
        void getThePicture(std::ifstream &, unsigned int) = 0;
        void getPicture(char *, unsigned int) = 0;
        void setDataFromFile(unsigned int) = 0;


};

#endif