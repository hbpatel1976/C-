#include <iostream>
#include <string.h>
using namespace std;
class account
{
	private:
		char name[20];
		char accountNumber[20];
		char accountType;
		float balance;
	public:
		account(char nm[20], char actnm[20], char type, float bls)
		{
			strcpy(name, nm);
			strcpy(accountNumber, actnm);
			accountType=type;
			balance=bls;
		}
		
		account() {}
		
		void initialize(char nm[20], char actnm[20], char type, float bls)
		{
			strcpy(name, nm);
			strcpy(accountNumber, actnm);
			accountType=type;
			balance=bls;
		}
		
		void display()
		{
			cout << "Accunt Holder Name : " << name << endl;
			cout << "Accunt Number : " << accountNumber << endl;
			cout << "Accunt Type : " << accountType << endl;
			cout << "Balance : " << balance << endl;
		}
		void deposit(int money)
		{
			balance =  balance + money;
		}
		void withdraw(int money)
		{
			if(balance-money >= 1000)
			{
				balance =  balance - money;
			}
			else
			{
				cout << "In sufficient balance..Maintain minimum Rs. 1000..." << endl;
			}	
		}
};
int main()
{
	account d("Dhruvi","461223",'S',1000);
	account h;
	d.display();
	d.deposit(2000);
	d.display();
	d.withdraw(1500);
	d.display();
	d.withdraw(600);
	d.display();
	
	
	h.initialize("Hiren","254789", 'C',5000);
	h.display();
}

