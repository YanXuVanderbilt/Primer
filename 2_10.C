#include <iostream>
std::string global_str; 
int global_int;

int main()
{
	int local_int;
	std::string local_str();

	std::cout << "default global_string is: " << global_str << "\ndefault global_int is: " << global_int <<"\ndefault local_int is: " 
		<< local_int << "\ndefault local string is: " << local_str << std::endl;

	return 0;
}
