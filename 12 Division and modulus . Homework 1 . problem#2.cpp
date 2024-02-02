/*write a program that reads in 2 real numbers , a and b , and then divides them (a/b),
* but prints out only the fraction part
* input : 201 25
* output : 0.04
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	double fraction_part;
	cout << "Enter two numbers : ";
	cin >> a >> b;
	double c, d;
	c = a;
	d = b;
	fraction_part = (c / d) - (a / b);
	cout << "The fraction part of the division is : " << fraction_part << "\n\n\n";
}

