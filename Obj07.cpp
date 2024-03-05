#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int a1 = 10, a2; 
    char b1 = 'a', b2;
    float c1 = 12.34, c2;
    double d1 = 4.2;
  
    a2 = a1 + b1; // Implicit Conversion ['a' -> 97]
    b2 = b1 + 10; // Implicit Conversion 'a' + 10 = 97 + 10 = 107 => 'k'
    c2 = c1 + a1; // Implicit Conversion [10 -> 10.0]
    
    cout << a2 << endl;
    cout << b2 << endl;
    cout << c2 << endl;
    
    c2 = a1 / a2; 
    cout << c2 << endl;
    
    c2 = (float)a1 / a2; // Explicit Conversion of int into float
    cout << c2 << endl;
} 
