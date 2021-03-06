//
//  main.cpp
//  assignment 1
//  4.16
//

#include <iostream>

int main() {
    double total_funds = 0;
    while (true) {
        int laps;
        double sponsorship_rate, contribution;
        std::cout << "Enter laps completed(-1 to end): ";
        std::cin >> laps;
        if (laps == -1) {
            std::cout << "Total funds raised: " << total_funds;
            return 0;
        }
        std::cout << "Enter sponsorship rate: ";
        std::cin >> sponsorship_rate;
        contribution = laps*sponsorship_rate;
        if (laps > 40) {
            contribution += (40-laps)*sponsorship_rate*1.5;
        }
        std::cout << "Student contribution: " << contribution << "\n";
        total_funds += contribution;
    }
}
