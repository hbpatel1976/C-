#include <iostream>
#include <string.h>
using namespace std;
class Student
{
	private: 
		int rollno;
		char name[20];
	public:
		void set(int r, char n[20])
		  {rollno=r; strcpy(name,n);}
		void show()
		{cout << rollno << "\t" << name << endl;}
};

int main()
{
	Student s1,s2;
	s1.set(101,"Sanjay");
	s2.set(201,"Parimal");
	s1.show();
	s2.show();
}
