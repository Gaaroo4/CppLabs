//
//  Vector.hpp
//  OOPLAB-5
//
//  Created by Дмитрий Петров on 25.04.2023.
//

#ifndef Vector_hpp
#define Vector_hpp
#pragma once
#include "Object.hpp"
#include "Vector.hpp"
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class Vector {
    
public:
    Vector(void);
    Vector(int);
public:
    ~Vector(void);
    void Add(Pair *);
   friend ostream& operator<< (ostream&out, const Vector&);
private:
   Pair**beg;
   int size;
   int cur;
   
   
};


#endif /* Vector_hpp */
