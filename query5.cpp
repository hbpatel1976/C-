#include <iostream>
using namespace std;
class Hina
{
	private:
		int data1, data2;
	public:
		Hina()
		{
			cout << "This is a constructor without argument\n";
			data1=data2=0;
		}
		Hina(int d)
		{
			cout << "This is a constructor with one argument\n";
			data1=data2=d;
		}
		Hina(int d1, int d2)
		{
			cout << "This is a constructor with two arguments\n";
			data1=d1;
			data2=d2;
		}
		void display()
		{
			cout << "Data 1 = " << data1 << " Data 2 = " << data2 << endl;
		}
};
int main()
{
	Hina obj1, obj2(10), obj3(20,30);
	obj1.display();
	obj2.display();
	obj3.display();
}
