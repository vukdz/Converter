#include <iostream>
#include "Conversion.h"

int main()
{
    int num;
    Converter converter;

    while (true)
    {             
        std::cout << "Enter a number or press any key to exit: ";
        if (std::cin >> num)
        {
            converter.toBin(num);
            converter.toOct(num);
            converter.toHex(num);
        }
        else
        {
            return 0;
        }       
        std::cout << std::endl;       
    }
}

