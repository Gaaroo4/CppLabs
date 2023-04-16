//
//  addon.cpp
//  OOPLab-4
//
//  Created by Дмитрий Петров on 12.04.2023.
//

#include "addon.hpp"

Pair Pair::operator-(const Pair&link) {
    Pair p;

    int temp1 = first_Num;
    int temp2 = second_Num;
    int temp3 = link.first_Num;
    int temp4 = link.second_Num;
    int tempArray[4];
    
    tempArray[0] = temp1;
    tempArray[1] = temp2;
    tempArray[2] = temp3;
    tempArray[3] = temp4;
    
    
    for (int index = 0; index < 3; index++) {
        for (int i = 0; i < 3; i++) {
            
            if (tempArray[i] == tempArray[index] and i != index and index > i) {
                
                std::cout<<"i"<<i<<" = "<<"index"<<index<<"\n";
                
            }
            
        }
    }
    
    p.first_Num = temp1 - temp2;
    p.second_Num = temp3 - temp4;
    return p;
}

Rational Rational::operator-(const Rational&link) {
    Rational p;
    
    double temp1 = chisl;
    int temp2 = znam;
    double temp3 = link.chisl;
    int temp4 = link.znam;
    int tempArray[4];
    
    tempArray[0] = temp1;
    tempArray[1] = temp2;
    tempArray[2] = temp3;
    tempArray[3] = temp4;
    
    
    for (int index = 0; index < 3; index++) {
        for (int i = 0; i < 3; i++) {
            
            if (tempArray[i] == tempArray[index] and i != index and index > i) {
                
                std::cout<<"i"<<i<<" = "<<"index"<<index<<"\n";
                
            }
            
        }
    }
    
    p.chisl = (temp1/temp2 - temp3/temp4);
    p.znam = 0;
    return p;
}

Rational Rational::operator+(const Rational&link) {
    Rational p;
    
    double temp1 = chisl;
    int temp2 = znam;
    double temp3 = link.chisl;
    int temp4 = link.znam;
    int tempArray[4];
    
    tempArray[0] = temp1;
    tempArray[1] = temp2;
    tempArray[2] = temp3;
    tempArray[3] = temp4;
    
    
    for (int index = 0; index < 3; index++) {
        for (int i = 0; i < 3; i++) {
            
            if (tempArray[i] == tempArray[index] and i != index and index > i) {
                
                std::cout<<"i"<<i<<" = "<<"index"<<index<<"\n";
                
            }
            
        }
    }
    
    p.chisl = (temp1/temp2 + temp3/temp4);
    p.znam = 0;
    return p;
}

Rational Rational::operator*(const Rational&link) {
    Rational p;
    
    double temp1 = chisl;
    int temp2 = znam;
    double temp3 = link.chisl;
    int temp4 = link.znam;
    int tempArray[4];
    
    tempArray[0] = temp1;
    tempArray[1] = temp2;
    tempArray[2] = temp3;
    tempArray[3] = temp4;
    
    
    for (int index = 0; index < 3; index++) {
        for (int i = 0; i < 3; i++) {
            
            if (tempArray[i] == tempArray[index] and i != index and index > i) {
                
                std::cout<<"i"<<i<<" = "<<"index"<<index<<"\n";
                
            }
            
        }
    }
    
    p.chisl = (temp1/temp2 * temp3/temp4);
    p.znam = 0;
    return p;
}
