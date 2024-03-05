// Structure Vs. Class

#include <iostream>
using namespace std;

struct student
{
	int rollno, maths, english, hindi;
};

class employee
{
public:
	int code, salary;
	employee(int c, int s) {code=c; salary=s;}
};
int main()
{
	struct student himanshu={17,48,59,69}, monu={2,47,56,40};
	printf("Himanshu Total = %d\n", himanshu.maths + himanshu.english + himanshu.hindi);
	printf("Monu Total = %d\n", monu.maths + monu.english + monu.hindi);
	
	employee hiren(2020,10000), hardik(2039, 15000);
	cout << "Code = " << hiren.code << " Salary = " << hiren.salary << endl;
	cout << "Code = " << hardik.code << " Salary = " << hardik.salary << endl;
}
