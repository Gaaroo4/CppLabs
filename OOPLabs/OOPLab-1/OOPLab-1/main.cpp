//
//  main.cpp
//  OOPLab-1
//
//  Created by Дмитрий Петров on 09.04.2023.
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

using namespace std;

//y=Ax+B

class doublePoles {
public:

    double first;
    double second;

};

double count(double x, int A, int b) {

    double y;
    
    y = A * x + b;
    
    return y;
    
}

int main() {
    
    int A = 5, b = 10;
    
    doublePoles doublePolesExample;
    
    cin>>doublePolesExample.first;
    
    doublePolesExample.second = count(doublePolesExample.first, A, b);
    
    cout<<doublePolesExample.second;
    
}
