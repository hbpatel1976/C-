#include <iostream>
using namespace std;
class Summation
{
	public:
		int add(int x) {return x;}
		int add(int x, int y) {return x+y;}
		int add(int x, int y, int z) {return x+y+z;}
		
};
int main()
{
	Summation s;
	cout << s.add(10) << endl;
	cout << s.add(10,20) << endl;
	cout << s.add(10,20,30) << endl;
}
