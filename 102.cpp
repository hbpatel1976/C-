#include <iostream>
using namespace std;
#define totalStudents 3
struct student
{
	int rollno;
	char name[20];	
	int maths, english, science;
};
int main()
{
	student s[totalStudents];
	int i, totalMarks;
	for(i=0; i<totalStudents; ++i)
	{
		cout << "Student # " << i << endl;
		cout << "Enter Rollno : ";cin >> s[i].rollno;
		cout << "Enter Name : "; cin >> s[i].name;
		cout << "Enter Maths Marks: "; cin >> s[i].maths;
		cout << "Enter English Marks: "; cin >> s[i].english;
		cout << "Enter Science Marks: "; cin >> s[i].science;
	}
	for(i=0; i<totalStudents; ++i)
	{
		cout << "Student # " << i << "Rollno : " << s[i].rollno << " Name : " << s[i].name << endl;
		cout << "Maths : " << s[i].maths << " English : " << s[i].english << " Science : " << s[i].science << endl;
		totalMarks = s[i].maths + s[i].english + s[i].science;
		cout << " Total : " << totalMarks << " Average : " << totalMarks/totalStudents << endl;
	}
}
