#include <iostream>
using namespace std;
class Father
{
	private:
		int Fmoney;
	public:
		void setMoneyF(int f){Fmoney=f;}
		void showMoneyF(){cout << "Father Money : " << Fmoney << endl;}
};
class Son : public Father
{
	private:
		int Smoney;
	public:
		void setMoneyS(int s, int f) 
			{
				Smoney=s;
				Father::setMoneyF(f);
			}
		void showMoneyS()
		{
			Father::showMoneyF();
			cout << "Son Money : " << Smoney << endl;
		}
};
int main(void)
{
	Son object;
	object.setMoneyS(5000, 80000);
	object.showMoneyS();
}
