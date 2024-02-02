/*write a program that reads in 5 real numbers and prints out the following :
 A) their average
 B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
 C) The average of the first 3 numbers divided by the average of the last 2 numbers
 D) what is the mathematical relationship between B and C ?
*/
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d, e;
	cout << "Enter five real numbers : ";
	cin >> a >> b >> c >> d >> e;
	cout << "A) The average of these numbers : " << (a + b + c + d + e) / 5 << "\n";
	cout << "B) The sum of the first 3 numbers divided by the sum of the last 2 numbers : " << (a + b + c) / (d + e) << "\n";
	cout << "C) The average of the first 3 numbers divided by the average of the last 2 numbers : " << (2 * (a + b + c)) / (3 * (d + e)) << "\n";
	cout << "The mathematical relationship between B and C is : " << "C = 2/3 B" << endl << endl;
}

