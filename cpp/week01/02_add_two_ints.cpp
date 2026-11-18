#include <iostream>

int main()
{
	std::cout << "Enter integer1 : ";
	int num1;
	std::cin >> num1;

	std::cout << "Enter integer2 : ";
	int num2;
	std::cin >> num2;

	int sum = num1 + num2;
	std::cout << "Sum is " << sum << std::endl;
}