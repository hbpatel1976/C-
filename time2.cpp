#include <iostream>
using namespace std;
class Time
{
private:
	int hour, minute, second;
public:	
	void set(int hour, int minute, int second)
	{
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	Time add(Time obj2)
	{
		Time obj3;
		obj3.hour = this->hour + obj2.hour;
		obj3.minute = this->minute + obj2.minute;
		obj3.second = this->second + obj2.second;
		if (obj3.second >= 60) {obj3.second-=60;obj3.minute++;}
		if (obj3.minute >= 60) {obj3.minute-=60;obj3.hour++;}
		return obj3;
	}
	void show()
	{
		cout << this->hour << "\t" << this->minute << "\t" << this->second << endl;
	}
};
int main()
{
	Time t1, t2, t3;
	t1.set(10, 20, 30);
	t2.set(25, 45, 50);
	t1.show();
	t2.show();
	t3 = t1.add(t2);
	t3.show();
}

