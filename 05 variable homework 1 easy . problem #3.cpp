/* given 8 space-separated integers , find the sum of those in even places and the sum 
* of those in odd places.
* input : 11 2 7 9 12 -8 3 -1
* output : 2 33
*/
#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8;
	cout << "Enter 8 numbers space-separated : ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
	cout << "Sum of even places numbers : " << n2 + n4 + n6 + n8 << endl;
	cout << "Sum of odd places numbers : " << n1 + n3 + n5 + n7 << "\n\n";
}

