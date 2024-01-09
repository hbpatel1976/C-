#include <iostream>
#include <string.h>
using namespace std;
class Book
{
	private: 
		char title[20];
		float price;
	public:
		void read()
		  {cout << "Enter Book Title: ";
		  cin >> title;
		  fflush(stdin);
		  cout << "Enter Book Price: ";
		  cin >> price;
		  }
		void show()
		{cout << "Book : " << title << " Price : " << price << endl;}
};

int main()
{
	Book b;
	b.read();
	b.show();
}
