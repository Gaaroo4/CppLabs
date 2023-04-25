//
//  Rational.cpp
//  OOPLAB-5
//
//  Created by Дмитрий Петров on 16.04.2023.
//

#include "Rational.hpp"

Rational::Rational(void) {
    
    first_Num = 0;
    second_Num = 0;
    
}

Rational::~Rational(void) {
    
}

Rational::Rational(int f, int s) {
    
    first_Num = f;
    second_Num = s;
    
}

Rational::Rational(const Rational& rational) {
    
    first_Num = rational.first_Num;
    second_Num = rational.second_Num;
    
}

void Rational::Set_first_Num(int f) {
    
    first_Num = f;
    
}

void Rational::Set_second_Num(int s) {
    
    second_Num = s;
    
}

Rational& Rational::operator= (const Rational&c) {
    
    if(&c==this) return *this;
    first_Num = c.first_Num;
    second_Num = c.second_Num;
    return *this;
    
}

std::istream& operator>> (std::istream&in, Rational&c) {
    
    std::cout<<"\nFirst_Num:"; in>>c.first_Num;
    std::cout<<"\nSecond_Num:"; in>>c.second_Num;
    return in;
    
}

std::ostream& operator<< (std::ostream&out, const Rational&c) {
    
    out<<"\nFirst_Num: "<<c.first_Num;
    out<<"\nSecond_Num: "<<c.second_Num;
    out<<"\n";
    return out;
    
}

void Rational::show() {
    
    std::cout<<"\nFirst_Num: "<<first_Num;
    std::cout<<"\nSecond_Num: "<<second_Num;
    std::cout<<"\n";
    
}

