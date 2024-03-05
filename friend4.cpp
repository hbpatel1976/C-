#include <iostream>
using namespace std;
class Himanshu
{
	private:
		int moneyHimanshu;
	public:
		Himanshu(){moneyHimanshu=1000;}
		friend class Smit;
};
class Smit
{
	public:
		void display(Himanshu objh)
		{
			cout << objh.moneyHimanshu;
		}
};
int main()
{
	Himanshu objH;
	Smit objS;
	objS.display(objH);
}
