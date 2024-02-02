/* problem #2 : sum of the last 3 digits
* write a program that reads a positive integer and prints the sum of its last 3 digits
*/

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter any number : ";
	cin >> num;
	int digit1 = num % 10;
	num /= 10;
	int digit2 = num % 10;
	num /= 10;
	int digit3 = num % 10;
	cout << "The sum of the last 3 digits : " << digit1 + digit2 + digit3 << "\n\n\n";
}