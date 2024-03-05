#include <iostream>
using namespace std;
class Time
{
private:
	int data;
public:	
	void set(int data)
	{
		this->data = data;
	}
	Time add(Time obj2)
	{
		Time obj3;
		obj3.data = this->data + obj2.data;
		return obj3;
	}
	void show()
	{
		cout << this->data << endl;
	}
};
int main()
{
	Time t1, t2, t3;
	t1.set(10);
	t2.set(20);
	t3=t1.add(t2);
	t3.show();
}
