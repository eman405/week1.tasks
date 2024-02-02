/* write a program that reads in the information for 2 students about their math exam
* for each student read : their name, id and grade
* the name and id are both strings , and neither string contains spaces 
* print out the information for each student 
* print the average grade
*/
#include <iostream>
using namespace std;
int main()
{
	string name1, id1, name2, id2;
	float grade1, grade2;
	cout << "Enter student1 name : ";
	cin >> name1;
	cout << "Enter student1 id : ";
	cin >> id1;
	cout << "Enter student1 math grade : ";
	cin >> grade1;
	cout << "Enter student2 name : ";
	cin >> name2;
	cout << "Enter student2 id : ";
	cin >> id2;
	cout << "Enter student2 math grade : ";
	cin >> grade2;
	cout << "\n\n" << name1 << " (with id " << id1 << ") has grade = " << grade1 << endl;
	cout << name2 << " (with id " << id2 << ") has grade = " << grade2 << endl;
	cout << "The average grade is : " << (grade1 + grade2) / 2 << "\n\n\n\n\n";
}

