#include <iostream>
using namespace std;
class person
{
	private:
		int code;
	public:
		person(int c) {code=c;}
		void show() {cout << "Code = " << code << ", ";}
};
class student : public person
{
	private:
		int marks;
	public:
		student(int c, int m) : person(c)
		{
			marks = m;
		}
		void show() 
		{
			person::show();
			cout << "Marks = " << marks << endl;
		}
};
class employee : public person
{
	private:
		int salary;
	public:
		employee(int c, int s): person(c)
		{
			salary = s;
		}
		void show() 
		{
			person::show();
			cout << "Salary = " << salary << endl;
		}
};
int main()
{
	student s(100, 79);
	employee e(101, 10000);
	s.show();
	e.show();
}
