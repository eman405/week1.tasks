/* problem #1 : is it even?
write a program that reads a positive integer and test if it is boolean or not
find at least 3 different ways for this task:
using only %2
using only /2
using only %10
*/
#include <iostream>
using namespace std;
int main()
{
	//using only %2
	int num;
	cout << "Enter any number : ";
	cin >> num;
	bool iseven = (num % 2 == 0);
	bool isodd = (num % 2 != 0);
	cout << "The probability that the number is even is : " << iseven << " and the probability it is odd is : " << isodd << "\n\n\n";
	

	//using only /2

	/*int num;
	cout << "Enter any number : ";
	cin >> num;
	double division1 = num / 2.0;
	double remainder = division1 - (int)division1;
	bool iseven = (remainder == 0);
	bool isodd = (remainder != 0);
	cout << "The probability that the number is even is : " << iseven << " and the probability it is odd is : " << isodd << "\n\n\n";
	*/


	//using only %10

	/*int num;
	cout << "Enter any number : ";
	cin >> num;
	int remainder = num % 10;
	bool iseven = (remainder == 0 || remainder == 2 || remainder == 4 || remainder == 6 || remainder == 8);
	cout << "The probability that the number is even is : " << iseven << " and the probability it is odd is : " << !iseven << "\n\n\n";
	*/
}

