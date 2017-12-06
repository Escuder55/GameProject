#include <iostream>
#include<string>


void main()
{
	char palabra[5]{ 'H','o','l','a','\n' };
	std::string palabras = palabra;
	std::cout << palabras;
	std::cout << palabra << std::endl;
}