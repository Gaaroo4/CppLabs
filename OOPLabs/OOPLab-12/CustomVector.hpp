//
//  CustomVector.hpp
//  OOPLab-12
//
//  Created by Дмитрий Петров on 05.06.2023.
//


#include <stdio.h>
#include <iostream>
#include <set>
#include <vector>
#pragma once
template <typename T>
class Vector {
private:
    std::multiset<T> container;

public:
    void addElements3(const std::vector<T>& elements) {
        for (const auto& element : elements) {
            container.insert(element);
        }
    }

    void removeElement3(const T& key) {
        auto it = container.find(key);
        if (it != container.end()) {
            container.erase(it);
        }
    }

    void performTask3() {
        if (container.empty()) {
            return;
        }

        const T& minElement = *container.begin();

        container.insert(minElement);

        T keyElement;
        auto keyIt = container.find(keyElement);
        if (keyIt != container.end()) {
            container.erase(keyIt);
        }

        const T& maxElement = *container.rbegin();
        for (auto element : container) {
            element += minElement + maxElement;
        }
    }
};
