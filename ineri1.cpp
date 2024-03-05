#include <iostream>
using namespace std;
class base
{
	private: 
		void showBasePrivate() {cout << "This is show function in private section of base class\n";}
	protected: 
		void showBaseProtected() {cout << "This is show function in protected section of base class\n";}
	public: 
		void showBasePublic() {cout << "This is show function in public section of base class\n";}
};
class derive : public base
{
	private: 
		void showDerivePrivate() {cout << "This is show function in private section of derive class\n";}
	protected: 
		void showDeriveProtected() {cout << "This is show function in protected section of derive class\n";}
	public: 
		void showDerivePublic() {cout << "This is show function in public section of derive class\n";}
};
int main(void)
{
	base objBase;
	derive objDerive;

	objBase.showBasePublic();
	objDerive.showBasePublic();
	objDerive.showDerivePublic();
}
