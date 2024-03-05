#include <iostream> 
using namespace std; 
class Time
{
	private: int hour, minute, second;
	public:
		void setTime(int hour, int minute, int second)
		{
			this->hour = hour;
			this->minute = minute;
			this->second = second;
		}
		void showTime(void)
		{
			cout << "Hour: " << hour << " Minute: " << minute << " Second: " << second;
		}
};
int main()
{
	Time t;
	t.setTime(3,55,39);
	t.showTime();
}
