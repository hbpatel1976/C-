#include <iostream>
using namespace std;
class Father
{
	public:
		void callFunction() {show();}
		virtual void show(){cout << "This is a Father(base) class" << endl;}
};
class Son : public Father
{
	public:
		void show(){cout << "This is a Son(derived) class" << endl;}
};
int main(void)
{
	Father f;
	Son s;
	f.show();
	s.show();
}
