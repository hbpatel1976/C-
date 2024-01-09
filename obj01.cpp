#include <iostream>
using namespace std;
class Room
{
	private: 
		float length, width;
	public:
		void set(float l, float w){length=l; width=w;}
		void showArea() {cout << " Area : " << length * width << endl;}
};

int main()
{
Room bedroom, kitchen;
bedroom.set(20, 25);
kitchen.set(12,8);
cout << "Bedroom "; 
bedroom.showArea();
cout << "Kitchen "; 
kitchen.showArea();
}
