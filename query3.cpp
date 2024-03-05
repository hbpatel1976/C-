#include <iostream>
using namespace std;
class Rameshgiri
{
	public:
		int property;
		void setProperty(int p) {property=p;}
};
class Monu: public Rameshgiri
{
	public:
		int salary;
		void setMonuAsset(int p, int s) 
			{
				setProperty(p);
				salary=s;
			}
		void showMonuAsset() {cout << "Monu : Papa Property = " << property << " Salary = " << salary << endl;}
};
class Sonu : public Rameshgiri
{
	public:
		int salary;
		void setSonuAsset(int p, int s) 
			{
				setProperty(p);
				salary=s;
			}
		void showSonuAsset() {cout << "Sonu : Papa Property = " << property << " Salary = " << salary << endl;}
};

int main()
{
Rameshgiri objr;
Monu objm;
Sonu objs;	
objm.setMonuAsset(50000, 25000);
objs.setSonuAsset(50000, 75000);
objm.showMonuAsset();
objs.showSonuAsset();
objs.
}
