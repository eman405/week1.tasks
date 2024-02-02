// write a program that reads 2 real numbers and print their + - * / computations
#include <iostream>
using namespace std;
int main()
{
	double num1, num2;
	cout << "Enter two numbers : ";
	cin >> num1 >> num2;
	cout << "The summation is : " << num1 + num2 << endl;
	cout << "The subtraction is : " << num1 - num2 << endl;
	cout << "The multiplication is : " << num1 * num2 << endl;
	cout << "The division is : " << num1 / num2 << endl;
}

