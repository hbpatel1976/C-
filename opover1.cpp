#include<iostream>
using namespace std;
class Student
{
	private: int marks;
	public: 
		Student(int m) {marks=m;}
		void show() {cout << marks << endl;}
		Student add(Student m)
		{
			Student h(0);
			h.marks = (m.marks + marks)/2;	
			return h;
		}
};
int main()
{
	Student smit(66), monu(91), himanshu(0);
	smit.show();
	monu.show();
	himanshu = smit.add(monu);
	himanshu.show();
}
