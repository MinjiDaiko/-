#include <iostream>

int main() {
	short a = 50;
	int b = 100;
	long c = 150;
	long long d = 200;
	float a1 = 50.5;
	double b1 = 100.5;
	long double c1 = 150.5;
	bool d1 = true;

	std::cout << "short: " << &a << " " << sizeof(a) <<std::endl;
	std::cout << "int: " << &b << " " << sizeof(b) << std::endl;
	std::cout << "long: " << &c << " " << sizeof(c) << std::endl;
	std::cout << "long long: " << &d << " " << sizeof(d) << std::endl;
	std::cout << "float: " << &a1 << " " << sizeof(a1) << std::endl;
	std::cout << "double: " << &b1 << " " << sizeof(b1) << std::endl;
	std::cout << "long double: " << &c1 << " " << sizeof(c1) << std::endl;
	std::cout << "bool: " << &d1 << " " << sizeof(d1) << std::endl;

	return 0;
}

