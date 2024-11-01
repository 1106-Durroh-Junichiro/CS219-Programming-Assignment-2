
#ifndef REGISTER_H
#define REGISTER_H
#include <iomanip>
#include <iostream>
using namespace std;

class Register{

    public:
        uint32_t value;
        Register();
        Register(uint32_t);
        Register(Register&);

        uint32_t operator +(Register&);
        Register& operator =(Register&);

        

        friend bool operator < (Register&, Register&);
        friend ostream& operator<< (ostream&, uint32_t);

};
#endif
