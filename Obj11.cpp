#include <iostream> 
using namespace std; 
class Test
{
	private: 
		int data;
	public:
		Test()
		{
			cout << "Constructor Called - without argument \n";
			data=0;
		}
		Test(int x)
		{
			cout << "Constructor Called - with argument \n";
			data=x;
		}
		void showData(void)
		{
			cout << data << endl;
		}
};
int main()
{
	Test obj1, obj2(10);	
	obj1.showData();
	obj2.showData();
}
