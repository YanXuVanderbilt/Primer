#include <iostream>
int main() {}
class Sales_item {
public:
	// operations on Sales_item objects will go here
private:
	std::string isbn;
	unsigned units_solids;
	double revenue;
};

struct Sales_item2 {
	// no need for public label, members are public by default
	// operations on Sales_item objects
private:
	std::string isbn;
	unsigned units_solid;
	double revenue;
}; 
