#include <iostream>
using namespace std;
#define total 3
class Room
{
	private: 
		float length, width;
	public:
		void read()
		{
			cout << "Enter Length : "; cin >> length;
			cout << "Enter Width : "; cin >> width;
		}
		void showArea() {cout << " Area : " << length * width << endl;}
};

int main()
{
	int i;
	Room r[total];
	for(i=0; i<total; ++i){r[i].read();}
	for(i=0; i<total; ++i){r[i].showArea();}
}
