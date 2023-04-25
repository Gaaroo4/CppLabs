//
//  Vector.cpp
//  OOPLAB-5
//
//  Created by Дмитрий Петров on 25.04.2023.
//

#include "Vector.hpp"

Vector::Vector(void) {
   
   beg = 0;
   size = 0;
   cur = 0;
   
}

Vector::~Vector(void) {
   
   if(beg!=0)delete [] beg;
   beg = 0;
   
}

Vector::Vector(int n) {
   
   beg = new Pair*[n];
   cur = 0;
   size = n;
   
}

void Vector::Add(Pair *p) {
   
   if (cur<size) {
      
      beg[cur]=p;
      cur++;
      
   }
   
}

ostream& operator<< (ostream&out, const Vector&v) {
   
   if (v.size==0) out<<"Empty"<<endl;
   Pair **p=v.beg;
   for (int i=0; i<v.cur;i++) {
      
      (*p)->show();
      p++;
      
   }
   
   return out;
   
}
