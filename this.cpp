#include <iostream>
using namespace std;
class student
{
private:
	int rollno;
public:	
	void setRollno(int rollno)
	{
		this.rollno = rollno;
	}
	void showRollno(void)
	{
		cout << rollno << endl;
	}
};
int main()
{
	student prem, smit;
	prem.setRollno(10);
	prem.showRollno();
	smit.setRollno(20);
	smit.showRollno();
}
