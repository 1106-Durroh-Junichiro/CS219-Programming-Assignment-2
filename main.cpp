
/*
Name: Junichiro Durroh
Date: 10/26/24
Purpose: Programming Assignment 2 / Practice with Bitwise Operations
*/

#include "register.h"
#include <fstream>
#include <iostream>

using namespace std;

uint32_t conversion(string);

int main(){

    ifstream file("Programming-Project-2.txt");
    string operation, operand1, operand2;
    
    if(file.is_open()){
        while(file.good()){
            file >> operation; //only reading for "operation" portion of file since not all operations use same amount of operands (helps prevent wrong data being read)
            if(operation == "ADD" || operation == "ADDS"){ // Breakdown for Bitwise ADD operation
                file >> operand1 >> operand2; // ADD uses 2 operands 
                Register r1(conversion(operand1));
                Register r2(conversion(operand2));
                uint32_t result = r1 + r2;
                Register r3(result);
                cout << operation << ": " << operand1 << "  " << operand2 << ": " << "0x" << hex << uppercase << result << endl;
            } 
            if(operation == "AND" || operation == "ANDS"){ // Breakdown for Bitwise AND operation
                file >> operand1 >> operand2;
                uint32_t r1(conversion(operand1));
                uint32_t r2(conversion(operand2));
                uint32_t result = r1 & r2;
                Register r3(result);
                cout << operation << ": " << operand1 << "   " << operand2 << ": " << "0x" << result << endl;
            }
            if(operation == "ASR" || operation == "ASRS"){ // Breakdown for Arithmetic Shift Right
                file >> operand1 >> operand2;
                uint32_t r1(conversion(operand1));
                uint32_t r2(conversion(operand2));
                cout << operation << ": " << operand1 << "  " << operand2 << ": " << "0x" << endl;
            }
            if(operation == "LSR" || operation == "LSRS"){ // Breakdown for Logical Shift Right
                file >> operand1 >> operand2;
                uint32_t r1(conversion(operand1));
                uint32_t r2(conversion(operand2));
                uint32_t result = r1 >> r2;
                Register r3(result);
                cout << operation << ": " << operand1 << "  " << operand2 << ": " << "0x" << result << endl;
            }
            if(operation == "LSL" || operation == "LSLS"){ // Breakdown for Logical Shift Left
                file >> operand1 >> operand2;
                uint32_t r1(conversion(operand1));
                uint32_t r2(conversion(operand2));
                uint32_t result = r1 << r2;
                Register r3(result);
                cout << operation << ": " << operand1 << "  " << operand2 << ": " << "0x" << result << endl;
            }
            if(operation == "NOT" || operation == "NOTS"){ // Breakdown for Bitwise NOT
                file >> operand1; // NOT uses 1 operand 
                uint32_t r1(conversion(operand1));
                uint32_t result = ~r1;
                Register r3(result);
                cout << operation << ": " << operand1 << ": " << "0x" << result << endl;
            }
            if(operation == "ORR" || operation == "ORRS"){ // Breakdown for Bitwise OR
                file >> operand1 >> operand2;
                uint32_t r1(conversion(operand1));
                uint32_t r2(conversion(operand2));
                uint32_t result = r1 | r2;
                Register r3(result);
                cout << operation << ": " << operand1 << "  " << operand2 << ": " << "0x" << result << endl;
            }
            if(operation == "SUB" || operation == "SUBS"){ // Breakdown for Bitwise SUB
                file >> operand1 >> operand2;
                uint32_t r1(conversion(operand1));
                uint32_t r2(conversion(operand2));
                uint32_t result = r1 - r2;
                Register r3(result);
                cout << operation << ": " << operand1 << "  " << operand2 << ": " << "0x" << result << endl;
            }
            if(operation == "XOR" || operation == "XORS"){ // Breakdown for Bitwise XORS
                file >> operand1 >> operand2;
                uint32_t r1(conversion(operand1));
                uint32_t r2(conversion(operand2));
                uint32_t result = r1 ^ r2;
                Register r3(result);
                cout << operation << ": " << operand1 << "  " << operand2 << ": " << "0x" << result << endl;
            }
        }
    }
}

uint32_t conversion(string s){
    uint32_t result = stoul(s, nullptr, 16);
    return result;
}
