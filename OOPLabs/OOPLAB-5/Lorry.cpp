//
//  Lorry.cpp
//  OOPLAB-5
//
//  Created by Дмитрий Петров on 23.04.2023.
//

#include "Lorry.hpp"

Lorry::Lorry(void):Rational() {
    
    gruz = 0;
    
}

Lorry::~Lorry(void) {
    
}

Lorry::Lorry(int F, int S, int G):Rational(F, S) {
    
    gruz = G;
    
}

Lorry::Lorry(const Lorry &L) {

    first_Num = L.first_Num;
    second_Num = L.second_Num;
    gruz = L.gruz;
    
}

void Lorry::Set_gruz(int G) {
    
    gruz = G;
    
}

Lorry& Lorry::operator=(const Lorry&l){
    
    if(&l==this) return *this;
    first_Num = l.first_Num;
    second_Num = l.second_Num;
    return *this;
    
}

std::istream& operator>> (std::istream&in, Lorry&l) {
    
    std::cout<<"\nFirst_Num:"; in>>l.first_Num;
    std::cout<<"\nSecond_Num:"; in>>l.second_Num;
    return in;
    
}

std::ostream& operator<< (std::ostream&out, const Lorry&l) {
    
    out<<"\nFirst_Num: "<<l.first_Num;
    out<<"\nSecond_Num: "<<l.second_Num;
    out<<"\n";
    return out;
    
}

void Lorry::show() {
    
    std::cout<<"\nFirst_Num: "<<first_Num;
    std::cout<<"\nSecond_Num: "<<second_Num;
    std::cout<<"\n";
    
}
    