/* problem #3 : get the 4th digit from the right 
* write a program that reads a positive integer , and prints out the 4th digit
* from the right side of the integer . if no such digit exists , print 0
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
	num /= 10;
	int digit4 = num % 10;
	cout << "The 4th digit is : " << digit4 << "\n\n\n";
}

