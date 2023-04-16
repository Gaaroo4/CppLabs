//
//  addon.hpp
//  OOPLab-3
//
//  Created by Дмитрий Петров on 09.04.2023.
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

using namespace std;

#endif /* addon_hpp */


class Money {
    
    int kopeyka;
    long ruble;
    
    public:
    
    Money() {
        
        kopeyka = 0;
        ruble = 0;
        
    }
    
    Money(long rubel, int kopiyka) {
        
        kopeyka = kopiyka;
        ruble = rubel;
        
    }
    
    int get_kop() {
        return kopeyka;
    }
    
    long get_rub() {
        return ruble;
    }
    
    Money operator/ (const Money&);
    
    Money operator* (const Money&);
    
    friend ostream&operator<<(ostream&out, const Money&link);
};
