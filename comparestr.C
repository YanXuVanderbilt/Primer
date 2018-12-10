#include <iostream>
int main()
{
	std::string str = "Hello";
	std::string phrase = "Hello World!";
	std::string slang = "Hiya";

	bool a = str<phrase;
	bool b = slang<str;

	std::cout << "\"Hello\" is smaller than \"Hello World!\" is: " << a << std::endl;
	std::cout << "\"Hiya\" is smaller than \"Hello\" is : " << b << std::endl;
}

