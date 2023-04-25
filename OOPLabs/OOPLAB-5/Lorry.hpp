//
//  Lorry.hpp
//  OOPLAB-5
//
//  Created by Дмитрий Петров on 23.04.2023.
//

#ifndef Lorry_hpp
#define Lorry_hpp

#pragma once
#include "Rational.hpp"
#include <stdio.h>

class Lorry : public Rational {
    
public:Lorry(void);
public:~Lorry(void);
    
    void show();
    Lorry(int,int,int);
    Lorry(const Lorry &);    int Get_gruz() {return gruz;}
    void Set_gruz(int);
    Lorry& operator= (const Lorry&);
    friend std::istream& operator>>(std::istream&in, Lorry&l);
    friend std::ostream& operator<<(std::ostream&out, const Lorry&l);
protected:int gruz;

    
};


#endif /* Lorry_hpp */
