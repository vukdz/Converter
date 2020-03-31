#include <iostream>
#include "Conversion.h"

void Converter::toBin(int x)
{
	int bin[32];
	int it = 0;

	while (x > 0)
	{
		bin[it] = x % 2;
		x /= 2;
		it++;
	}

	std::cout << "Bin: ";

	for (int i = it - 1; i >= 0; i--)
	{
		std::cout << bin[i];
	}
	std::cout << std::endl;
}

void Converter::toOct(int x)
{
	int oct[100];
	int it = 0;

	while (x != 0)
	{
		oct[it] = x % 8;
		x /= 8;
		it++;
	}

	std::cout << "Oct: ";

	for (int i = it - 1; i >= 0; i--)
	{
		std::cout << oct[i];
	}
	std::cout << std::endl;
}

void Converter::toHex(int x)
{
	char hex[100];
	int it = 0;

	while (x > 0)
	{
		int temp = x;

		temp = x % 16;

		if (temp < 10)
		{
			hex[it] = temp + 48;
			it++;
		}
		else
		{
			hex[it] = temp + 55;
			it++;
		}

		x = x / 16;
	}

	std::cout << "Hex: ";

	for (int i = it - 1; i >= 0; i--)
	{
		std::cout << hex[i];
	}
	std::cout << std::endl;	
}