#include <iostream> 
using namespace std; 
class Time
{
	private: int hour, minute, second;
	public:
		Time()
		{
			cout << "Constructor called\n";
			hour = minute = second = 0;
		}
		void setTime(int h, int m, int s)
		{
			hour = h;
			minute = m;
			second = s;
		}
		void showTime(void)
		{
			cout << "Hour: " << hour << " Minute: " << minute << " Second: " << second << endl;
		}
};
int main()
{
	Time t1, t2;
	t1.showTime();
	t2.showTime();
	t1.setTime(3,55,39);
	t1.showTime();
	t2.showTime();
}
