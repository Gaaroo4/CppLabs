//
//  main.cpp
//  OOPLAB-5
//
//  Created by Дмитрий Петров on 16.04.2023.
//

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
#include "Object.hpp"
#include "Rational.hpp"
#include "Lorry.hpp"
#include "Vector.hpp"

using namespace std;

int main() {
    
    Rational num;
    cin>>num;
    cout<<num<<"\n";
    Pair *p = &num;
    p->show();

    Lorry lor;
    cin>>lor;
    cout<<lor<<"\n";
    p=&lor;
    p->show();
    
//    Vector v(5);
//    Rational a;
//    cin>>a;
//    Lorry b;
//    cin>>b;
//    Pair*p=&a; //Redefinition of p, use Vector or higher one (Lorry/rational)
//    v.Add(p);
//    p=&b;
//    v.Add(p);
//    cout<<v;
}
