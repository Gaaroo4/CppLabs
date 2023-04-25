//
//  Rational.hpp
//  OOPLAB-5
//
//  Created by Дмитрий Петров on 16.04.2023.
//

#ifndef Rational_hpp
#define Rational_hpp

#include "Object.hpp"
#include <stdio.h>
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

class Rational:
    public Pair

{
public:
    Rational(void);
public:
    virtual ~Rational(void);
    void show();
    Rational(int, int);
    Rational(const Rational&);
    int Get_first_Num () {
        
        return first_Num;
        
    }
    
    int Get_second_Num () {
        
        return second_Num;
        
    }
    void Set_first_Num (int);
    void Set_second_Num (int);
    Rational& operator= (const Rational&);
    friend std::istream& operator>>(std::istream&in, Rational&c);
    friend std::ostream& operator<<(std::ostream&out, const Rational&c);
protected:
    int first_Num;
    int second_Num;
};
#endif /* Rational_hpp */
