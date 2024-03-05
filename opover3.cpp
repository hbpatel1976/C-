#include<iostream>
using namespace std;
class Time
{
	private:
		int hour, minute, second;
	public:
		Time(){hour = 0; minute = 0; second = 0;}
		Time(int h, int m, int s) {hour = h; minute = m; second = s;}
		void show() {cout << "Hour : " << hour << " Minute : " << minute << " Second : " << second << endl;}
		Time operator + (Time t2)
		{
			Time t3;
			t3.hour = hour + t2.hour;	
			t3.minute = minute + t2.minute;
			t3.second = second + t2.second;
			if(t3.second > 59) {t3.second -= 60; t3.minute++;}
			if(t3.minute > 59) {t3.minute -=60; t3.hour++;}
			return t3;
		}
};
int main()
{
	Time T1(5, 48, 39), T2 (2, 13, 23), T3;
	T3 = T1 + T2;
	T3.show();
}
