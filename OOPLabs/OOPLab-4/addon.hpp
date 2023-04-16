//
//  addon.hpp
//  OOPLab-4
//
//  Created by Дмитрий Петров on 12.04.2023.
//

#ifndef addon_hpp
#define addon_hpp

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <initializer_list>
#include <utility>
#include <vector>
#include <map>

class Pair {
    
public:
    
    int first_Num, second_Num;
    
    Pair (void) {
        
        first_Num = 0;
        second_Num = 0;
        
    }
    
    Pair (int first, int second) {
        
        first_Num = first;
        second_Num = second;
        
    }
    
    Pair (const Pair& pair) {
        
        first_Num = pair.first_Num;
        second_Num = pair.second_Num;
        
    }
    
    ~Pair(void){
        
    }
    
    int Get_first_Num () {
        
        return first_Num;
        
    }
    
    int Get_second_Num () {
        
        return second_Num;
        
    }
    
    void Set_first_Num (int);
    void Set_second_Num (int);
    
    Pair operator- (const Pair&);
    
};

class Rational:Pair {
    
    double chisl = first_Num;
    int znam = second_Num;
   
public:
    
    Rational (void) {
        
        chisl = 0;
        znam = 0;
        
    }
    
    Rational (int first, int second) {
        
        chisl = first;
        znam = second;
        
    }
    
    Rational (const Rational& Rational) {
        
        chisl = Rational.chisl;
        znam = Rational.znam;
        
    }
    
    ~Rational(void){
        
    }
    
    double Get_chisl () {
        
        return chisl;
        
    }
    
    int Get_znam () {
        
        return znam;
        
    }
    
    void Set_chisl (int);
    void Set_znam (int);
    
    Rational operator- (const Rational&);
    Rational operator+ (const Rational&);
    Rational operator* (const Rational&);
};

#endif /* addon_hpp */
