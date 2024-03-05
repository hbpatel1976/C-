#include <iostream> 
using namespace std; 
class Time
{
	private: int hour, minute, second;
	public:
		void readTime(void)
		{
			cout << "Enter Hour : "; cin >> hour;
			cout << "Enter Minute : "; cin >> minute;
			cout << "Enter Second : "; cin >> second;
		}
		Time add(Time t)
		{
			Time temp;
			temp.hour = hour + t.hour;
			temp.minute = minute + t.minute;
			temp.second = second + t.second;
			if(temp.second>=60){temp.minute++; temp.second-=60;}
			if(temp.minute>=60){temp.hour++; temp.minute-=60;}
			return temp;
		}
		void showTime(void)
		{
			cout << "Hour: " << hour << " Minute: " << minute << " Second: " << second;
		}
};
int main()
{
	Time t1, t2, t3;
	t1.readTime();
	t2.readTime();
	t3=t1.add(t2);
	t3.showTime();	
}
