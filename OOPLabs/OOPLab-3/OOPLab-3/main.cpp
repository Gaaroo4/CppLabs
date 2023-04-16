//
//  main.cpp
//  OOPLab-3
//
//  Created by Дмитрий Петров on 09.04.2023.
//

#include <stdio.h>
#include "addon.hpp"
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
    
    Money money2(10000, 1000);
    
    Money money3(22000, 3050);
    Money m4;
    m4=money2/money3;
    cout<<m4.get_rub()<<","<<m4.get_kop()<<"\n";
    m4=money2*money3;
    cout<<m4.get_rub()<<","<<m4.get_kop();
}
