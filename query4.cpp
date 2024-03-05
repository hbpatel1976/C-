#include <iostream>
using namespace std;
int main()
{
	void function(void);
	void function(int);
	void function(int,int);
	int x;
	
	function(); // function call
	function(10);
	function(10,20);
}
void function(void)
{
	cout << "This is a function without argument\n";
}
void function(int x)
{
	cout << "This is a function with one argument\n";
}
void function(int x, int y)
{
	cout << "This is a function with two arguments\n";
}
