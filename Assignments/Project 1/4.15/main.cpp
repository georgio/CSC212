//
//  main.cpp
//  assignment 1
//  4.15
//

#include <iostream>

int main() {
    while (true) {
        double hours = 0;
        std::cout << "Enter number of hours worked (-1 to end): ";
        std::cin >> hours;
        if (hours == -1) {
            return 0;
        }
        std::cout << "\nAccrued leave: " << 2+0.1*hours << " hours\n";
    }
}
