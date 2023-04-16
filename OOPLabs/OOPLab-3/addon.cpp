//
//  addon.cpp
//  OOPLab-3
//
//  Created by Дмитрий Петров on 09.04.2023.
//

#include "addon.hpp"


//Money& operator/ (const Money&);
//
//Money& operator* (const Money&);
//
//friend ostream&operator<<(ostream&out, const Money&link);

Money Money::operator/ (const Money&link) {
    Money M;
    
    
    long temp3 = this->ruble;
    long temp4 = link.ruble;
    int temp1 = this->kopeyka;
    int temp2 = link.kopeyka;
    int tempK = temp1 + temp2;
    if (tempK>99) {
        for (int i = 0; tempK>99; i++) {
            temp3 += 1;
            tempK -= 100;
            M.kopeyka=tempK;
        }
    } else {
        
        M.kopeyka=tempK;
        
    }
    M.ruble=temp3+temp4;
    return M;
}

Money Money::operator* (const Money&link) {
    Money M;
    double drob = 0.7;
    int temp1 = this->kopeyka;
    int temp2 = link.kopeyka;
    long temp3 = this->ruble;
    long temp4 = link.ruble;
    int tempK = temp1 + temp2;
    long tempR = temp3 + temp4;
    tempK = tempK * drob;
    tempR = tempR * drob;
    if (tempK>99) {
        for (int i = 0; tempK>99; i++) {
            temp3 += 1;
            tempK -= 100;
            M.kopeyka=tempK;
        }
    } else {
        
        M.kopeyka=tempK;
        
    }
    M.ruble=tempR;
    
    return M;
}
