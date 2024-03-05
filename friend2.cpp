#include <iostream>
using namespace std;
class himanshu
{
	private:
		int dataH;
	public:
		void setH(int r) {dataH =  r;}
		void showH();
};

class smit
{
	private:
		int dataS;
	public:
		void setS(int r) {dataS =  r;}
		void showS() {cout << dataS << endl;}
		friend void himanshu::showH();
};

void himanshu::showH()
	{
		cout << "hello\n";
	}
int main()
{
	himanshu objH;
	smit objS;
	objS.showH();
}
