#include <iostream>
using namespace std;
class A
{
	public: virtual void show() {cout << "This is a show function in class A\n";}
};
class B: public A 
{
	public: void show() {cout << "This is a show function in class B\n";}
};
class C: public A 
{
	public: void show() {cout << "This is a show function in class C\n";}
};

int main()
{
	B objb;
	C objc;
	objb.show();
	objc.show();
}
