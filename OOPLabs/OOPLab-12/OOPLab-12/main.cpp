//
//  main.cpp
//  OOPLab-12
//
//  Created by Дмитрий Петров on 01.06.2023.
//

#include <iostream>
#include <set>
#include <vector>
#include "Money1.hpp"
#include "CustomVector.hpp"
using namespace std;

void addElements1(std::multiset<float>& container) {
    container.insert(3.5);
    container.insert(1.2);
    container.insert(4.7);
    container.insert(2.9);
}

void removeElement1(std::multiset<float>& container, float value) {
    auto it = container.find(value);
    if (it != container.end()) {
        container.erase(it);
        std::cout << "Elemets " << value << " was deleted.\n";
    }
    else {
        std::cout << "Elementт " << value << " wasn't found.\n";
    }
}

void performTask1(std::multiset<float>& container) {
    if (container.empty()) {
        std::cout << "Container is empty, add some before start\n";
        return;
    }

    float minElement = *container.begin();

    container.insert(minElement);

    float key = 4.7;
    removeElement1(container, key);

    float maxElement = *container.rbegin();

    for (auto it = container.begin(); it != container.end(); ++it) {
        float& value = const_cast<float&>(*it);
        value += minElement + maxElement;
    }
}

void printContainer1(const std::multiset<float>& container) {
    std::cout << "Container contains\n";
    for (const auto& value : container) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

void menu() {
    setlocale(0, "");
    std::multiset<float> container;
    int choice;

    do {
        std::cout << "Task №1: \n\n";
        std::cout << "Menu:\n";
        std::cout << "1. Add elements\n";
        std::cout << "2. Delete an element\n";
        std::cout << "3. Complete variants task\n";
        std::cout << "4. Write what contains this container\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose your action: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addElements1(container);
            std::cout << "Elements succesfully added.\n";
            break;
        case 2: {
            float value;
            std::cout << "Type a value of aan element: ";
            std::cin >> value;
            removeElement1(container, value);
            break;
        }
        case 3:
            performTask1(container);
            std::cout << "Variants task is completed.\n";
            break;
        case 4:
            printContainer1(container);
            break;
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Failure type. Try aagain.\n";
            break;
        }

        std::cout << '\n';
    } while (choice != 0);
}

void addElements2(std::multiset<Money>& container) {
    container.insert(Money(10, 50));
    container.insert(Money(5, 30));
    container.insert(Money(8, 20));
    container.insert(Money(7, 10));
}

void removeElement2(std::multiset<Money>& container, const Money& key) {
    auto it = container.find(key);
    if (it != container.end()) {
        container.erase(it);
        std::cout << "Element " << key << " deleted from container.\n";
    }
    else {
        std::cout << "Element " << key << " didn't found.\n";
    }
}

void performTask2(std::multiset<Money>& container) {
    if (container.empty()) {
        std::cout << "Container is empty, add some before start.\n";
        return;
    }

    const Money& minElement = *container.begin();

    container.insert(minElement);

    Money key(8, 20);
    removeElement2(container, key);

    const Money& maxElement = *container.rbegin();

    std::multiset<Money> tempContainer;

    for (const auto& money : container) {
        Money updatedMoney = money;
        updatedMoney.rub += minElement.rub + maxElement.rub;
        updatedMoney.kopeks += minElement.kopeks + maxElement.kopeks;

        if (updatedMoney.kopeks > 99) {
            updatedMoney.rub += updatedMoney.kopeks / 100;
            updatedMoney.kopeks %= 100;
        }

        tempContainer.insert(updatedMoney);
    }

    container = tempContainer;
}
 
void printContainer2(const std::multiset<Money>& container) {
    std::cout << "Container contains:\n";
    for (const auto& money : container) {
        std::cout << money << '\n';
    }
}

void menu2() {
    std::multiset<Money> container;

    int choice;
    do {
        cout << "Task №2: \n\n";
        std::cout << "Menu:\n";
        std::cout << "1. Add elements\n";
        std::cout << "2. Delete an element\n";
        std::cout << "3. Complete variants task\n";
        std::cout << "4. Write what contains this container\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose your action ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addElements2(container);
            std::cout << "Elements has been added to the container.\n";
            break;
        case 2: {
            int rub, kopeks;
            std::cout << "Type a key for deleting (Rubles and Kopeyks): ";
            std::cin >> rub >> kopeks;
            removeElement2(container, Money(rub, kopeks));
            break;
        }
        case 3:
            performTask2(container);
            std::cout << "Task completed.\n";
            break;
        case 4:
            printContainer2(container);
            break;
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Incorrect chose. Try again.\n";
            break;
        }

        std::cout << '\n';
    } while (choice != 0);
}



void menu3() {
    Vector<int> vec;

    std::vector<int> elements = { 5, 2, 8, 1, 9 };
    vec.addElements3(elements);

    int choice;
    do {
        cout << "Task №3: \n\n";
        std::cout << "Menu:\n";
        std::cout << "1. Add elements\n";
        std::cout << "2. Delete an element via key\n";
        std::cout << "3. Complete the task\n";
        std::cout << "0. Exit\n";
        std::cout << "Type a number of an operation ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            vector<int> newElements;
            vec.addElements3(newElements);
            break;
        }
        case 2: {
            int key;
            vec.removeElement3(key);
            break;
        }
        case 3: {
            vec.performTask3();
            break;
        }
        case 0: {
            std::cout << "Program is completed.\n";
            break;
        }
        default: {
            std::cout << "Incorrect chose. Try again.\n";
            break;
        }
        }
    } while (choice != 0);
}

int main() {
    setlocale(0, "");
    menu();
    menu2();
    menu3();
    return 0;
}
