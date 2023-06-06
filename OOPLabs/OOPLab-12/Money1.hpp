//
//  Money1.hpp
//  OOPLab-12
//
//  Created by Дмитрий Петров on 05.06.2023.
//

#include <stdio.h>
#include <iostream>
#include <set>
#include <vector>
#pragma once
struct Money {
    int rub;
    int kopeks;

    Money(int rub = 0, int kopeks = 0) : rub(rub), kopeks(kopeks) {}

    bool operator<(const Money& other) const {
        if (rub != other.rub) {
            return rub < other.rub;
        }
        return kopeks < other.kopeks;
    }

    friend std::ostream& operator<<(std::ostream& os, const Money& money) {
        os << money.rub << " ðóá. " << money.kopeks << " êîï.";
        return os;
    }
};
