#include <iostream>

int swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	return 0;
}

int main() {
	int a = 5;
	int b = 10;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	return 0;
}