
#include "register.h"


Register::Register(){
    value = '0';
}
Register::Register(uint32_t v){
    value = v;
}
Register::Register(Register& r){
    value = r.value;
}
uint32_t Register::operator +(Register& r){
    uint32_t result = value + r.value;
    return result;
}
Register& Register::operator =(Register& r){
    value = r.value;
    return *this;
}

bool operator < (Register& one, Register& two){
    bool boolResult;
    if(one.value < two.value){
        boolResult = 1;
    }
    else{
        boolResult = 0;
    }
    return boolResult;
}

// operator overload
ostream& operator<< (ostream& out, Register& r){
    out << "0x" << setw(8) << setfill('0') << hex << uppercase << r.value;
    return out;
}
