#include <iostream>
#include "Time.h"

int main() {
    Time t1(1, 75, 90);
    Time t2(0, 45, 20);

    std::cout << "t1: " << t1 << '\n';
    std::cout << "t2: " << t2 << '\n';

    Time t3 = t1 + t2;
    std::cout << "t1 + t2 = " << t3 << '\n';

    Time t4 = t2 - t1;
    std::cout << "t2 - t1 = " << t4 << '\n';

    Time time_input;
    std::cout << "\nEnter time in HH:MM:SS format (e.g. 12:34:56): ";
    std::cin >> time_input;
    std::cout << "You entered: " << time_input << '\n';
}