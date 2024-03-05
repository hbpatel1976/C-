#include <iostream>
using namespace std;
class Y;
class X
{
	private:
		int a;
	public:
		void sum(X, Y);
		X(int argument) {a=argument;}
};

class Y
{
	private:
		int b;
	public:
		Y(int argument) {b=argument;}
		friend void X :: sum(X, Y);
};
void X :: sum(X object1, Y object2)
{
	cout << object1.a + object2.b;
}

int main()
{
	X obj1(5);
	Y obj2(10);
	obj1.sum(obj1,obj2);
}
