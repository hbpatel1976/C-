#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int data1=10, data2=1000;
	long double pi = 3.141592653589793239;
	cout << data1 << endl;
	cout << data2 << endl;
	
	std::cout << std::setw(10);
	cout << data1 << endl;
	std::cout << std::setw(10);
	cout << data2 << endl;
	
	cout << "1.0 with showpoint: " << std::showpoint << 1.0 << '\n';
    cout << "1.0 with noshowpoint: " << std::noshowpoint << 1.0 << '\n';
    
    cout << "default precision (6): " << pi << '\n';
    cout << "std::setprecision(10): " << std::setprecision(10) << pi << '\n';
}
