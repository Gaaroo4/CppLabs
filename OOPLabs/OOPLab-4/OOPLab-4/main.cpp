//
//  main.cpp
//  OOPLab-4
//
//  Created by Дмитрий Петров on 12.04.2023.
//

#include "addon.hpp"

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

int main() {
    
    Pair pair2(10, 20);
    Pair pair3(20, 30);
    Pair pairR;
    pairR = pair2-pair3;
    cout<<pairR.Get_first_Num()<<" "<<pairR.Get_second_Num()<<"\n";
    
//    Rational rational2(10, 20);
//    Rational rational3(20, 30);
//    Rational rationalR;
//    rationalR = rational2-rational3;
//    cout<<rationalR.Get_chisl()<<"\n";
    
//    Rational rational2(10, 20);
//    Rational rational3(20, 30);
//    Rational rationalR;
//    rationalR = rational2+rational3;
//    cout<<rationalR.Get_chisl()<<"\n";
//
    Rational rational2(10, 20);
    Rational rational3(20, 30);
    Rational rationalR;
    rationalR = rational2*rational3;
    cout<<rationalR.Get_chisl()<<"\n";
}
