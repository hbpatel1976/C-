#include <iostream>
using namespace std;
class polymorphismFunctionOverloading
{
	public:
		void function(void) {cout << "This is a function without argument\n";}
		void function(int a) {cout << "This is a function with one argument\n";}
		void function(int a, int b) {cout << "This is a function two arguments\n";}
};
int main()
{
	polymorphismFunctionOverloading object;
	object.function();	
	object.function(5);
	object.function(5,10);
}
