#include <iostream>
using namespace std;
int data = 100; // Global Variable
int main()
{
	int data = 54; // Local Variable
	cout << "Local Variable : " << data;
	cout << "\nGocal Variable : " << ::data;
}
