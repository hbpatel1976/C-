#include <iostream>
using namespace std;
#define totalStudents 3
struct student
{
	int rollno;
	char name[20];	
};
int main()
{
	student s[totalStudents];
	int i;
	for(i=0; i<totalStudents; ++i)
	{
		cout << "Student # " << i << endl;
		cout << "Enter Rollno : ";
		cin >> s[i].rollno;
		cout << "Enter Name : ";
		cin >> s[i].name;
	}
	for(i=0; i<totalStudents; ++i)
	{
		cout << "Student # " << i << "Rollno : " << s[i].rollno << " Name : " << s[i].name << endl;
	}
}
