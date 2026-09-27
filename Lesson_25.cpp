#include <iostream>
#include "Fraction.h"

class Box {
private:
    int width;
public:
    explicit Box(int w) : width(w) {
        std::cout << "Box created with width: " << width << '\n';
    }

    friend void PrintBoxWidth(const Box& b);
};

void PrintBoxWidth(const Box& b) {
    std::cout << "Width of the box: " << b.width << '\n';
}

int main()
{
    //int number = 10;

    //std::cout << ++number << '\n';

    Fraction f1 = Fraction(22, 1);
    Fraction f2 = Fraction(3, 7);

    //f1++;
    //f2--;

    //Fraction sum = Fraction::add(f1, f2);
    //Fraction sum = f1 + f2;

    //Fraction f = 1 + f1;
    ////Fraction f = f1 + 2;

    //std::cout << sum << '\n';

    //std::cin >> f1 ;

    //std::cout << f1 << std::endl;


    //Fraction sum2 = f1 + f2;

    //Fraction f3 = 1 + f1;

    //std::cout << sum2 << '\n';

    std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << std::endl;
    std::cout << f1 << " * 2 = " << (f1 * 2) << std::endl;
    std::cout << "2 * " << f1  << " = " << (2 * f1) << std::endl << std::endl;

    std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << std::endl;
    std::cout << f1 << " / 2 = " << (f1 / 2) << std::endl;
    std::cout << "2 / " << f1 << " = " << (2 / f1) << std::endl;
}