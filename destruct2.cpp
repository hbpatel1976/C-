#include <iostream>
using namespace std;
 
int main()
{
    int x = 10;
    int& refToX = x;
    
	cout << &x << endl;
    cout << &refToX << endl;
    
    cout << "Original value of variable x = " << x << endl;
    cout << "Original value of reference to x = " << refToX << endl;
 
    refToX = 20;
    cout << "After Changing Reference to the variable: Value of variable x = " << x << endl;
    cout << "After Changing Reference to the variable: Value of reference to x = " << refToX << endl;
 
    x = 30;
    cout << "After Changing the value of the variable: Value of variable x = " << x << endl;
    cout << "After Changing the value of the variable: Value of reference to x = " << refToX << endl;

}
