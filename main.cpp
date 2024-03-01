#include <iostream>
#include "./lib/FileReader.hpp"

/**
 *
 */
int main(void)
{
	std::string method { std::getenv("REQUEST_METHOD") };

	if ( method.compare("POST") == 0 )
	{
		std::string data;

		std::cin >> data;

		std::cout << "Content-Type: application/json; charset=UTF-8\n\n";
		std::cout << data;
	}
	else
	{
		std::cout << "Content-Type: text/html\n\n";
		std::cout << FileReader().read("../public/home/index.html") << '\n';
	}

	return 0;
}