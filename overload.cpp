#include <iostream>
using namespace std;
int main()
{
	int a;
	void myFunction(void);
	void myFunction(int);
	void myFunction(float);
	void myFunction(int, int);
	
	myFunction();
	myFunction(10);
	myFunction(float(20));
	myFunction(10, 20);
}
void myFunction(void)
{
	cout << "This is myFunction without argument without return value\n";
}
void myFunction(int x)
{
	cout << "This is myFunction with one integer argument " << x << " without return value\n";
}
void myFunction(int x, int y)
{
	cout << "This is myFunction with two arguments " << x  << " " << y << " without return value\n";
}
void myFunction(float x)
{
	cout << "This is myFunction with one float argument " << x << " without return value\n";
}
