#include <iostream>
using namespace std;
class father
{
	private: int fatherPrivate;
	protected: int fatherProtected;
	public: int fatherPublic;
};

class son1 : private father
{
	private: 
		int son1Private;
		void showSon1Private()
			{
			cout << "show function in private section of son 1\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
	protected: 
		int son1Protected;
		void showSon1Protected()
			{
			cout << "show function in protected section of son 1\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
	public: 
		int son1public;
		void showSon1Public()
			{
			cout << "show function in public section of son 1\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
};

class son2 : protected father
{
	private: 
		int son2Private;
		void showSon2Private()
			{
			cout << "show function in private section of son 2\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
	protected: 
		int son2Protected;
		void showSon2Protected()
			{
			cout << "show function in protected section of son 2\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
	public: 
		int son2public;
		void showSon2Public()
			{
			cout << "show function in public section of son 2\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
};

class son3 : public father
{
	private: 
		int son3Private;
		void showSon3Private()
			{
			cout << "show function in private section of son 3\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
	protected: 
		int son3Protected;
		void showSon3Protected()
			{
			cout << "show function in protected section of son 2\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
	public: 
		int son3Pubic;
		void showSon3Public()
			{
			cout << "show function in public section of son 2\n";
			//fatherPrivate=0;
			fatherProtected=0;
			fatherPublic=0;
			}
};
int main()
{
	father objFather;
	son1 objSon1;
	son2 objSon2;
	son3 objSon3;
	objFather.fatherPublic=10;
	objSon3.
}
