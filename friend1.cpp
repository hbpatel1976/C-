#include <iostream>
using namespace std;
class student
{
	private:
		int rollno;
	public:
		void set(int r) {rollno =  r;}
		friend void show(student &);
};
void show(student &s)
	{cout << s.rollno << endl;}
int main()
{
	student obj;
	obj.set(10);
	show(obj);
}
