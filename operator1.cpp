#include <iostream>
using namespace std;
class SampleClass
{
	private:
		int data;
	public:
		SampleClass() {data=0;}
		SampleClass(int d) {data=d;}
		SampleClass operator + (SampleClass &argument)
		{
			cout << "Address of calling object = " << this << endl;
			cout << "Address of argument object = " <<  &argument << endl;
			SampleClass temp;
			temp.data = data + argument.data;
			return temp;
		}
		void showData()
		{
			cout << data;
		}
};
int main()
{
	SampleClass obj1(10), obj2(20), obj3;
	cout << "Address of obj1 = " << &obj1 << endl;
	cout << "Address of obj2 = " << &obj2 << endl;
	cout << "Address of obj3 = " << &obj3 << endl;
	obj3=obj1+obj2;
	obj3.showData();
}
