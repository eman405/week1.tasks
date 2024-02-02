// problem 3 : our remainder 
// write a program that reads in 2 positive integers , and print out the remainder 
// without using the modulus operator % 
// input : 27 12
// output : 3
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cout << "Enter two positive numbers : ";
	cin >> n >> m;
	int remainder = n - (n / m * m);
	cout << "The remainder is : " << remainder << "\n\n\n";
}

