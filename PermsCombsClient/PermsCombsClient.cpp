// PermsCombsClient.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <array>
#include <string>
#include "combination.h"

using namespace PermsAndCombs;

int main()
{
	std::array<unsigned int, 3> numbers = { 0, 1, 2 };
	std::array<std::string, 5> elements = { "a", "b", "c", "d", "e" };

	
	unsigned int result = 1;
	while ( result != 0 )
	{
		for ( const int element : numbers )
		{
			std::cout << elements[element] << " ";
		}
		std::cout << std::endl;
		result = MBnext_combination( &numbers[0], elements.size(), numbers.size() );
	}

    return 0;
}

