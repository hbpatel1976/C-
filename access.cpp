#include <iostream>
using namespace std;
class base
{
private:
	int basePriData;
	void basePriFunction(){cout << "Private Function Base Class\n";}
protected:
	int baseProData;
	void baseProFunction() {cout << "Protected Function Base Class\n";}
public:	
	int basePubData;
	void basePubFunction() {cout << "Public Function Base Class\n";}
};
class derived1 : private base
{
	private:
		void derived1PriFunction()
		{
			cout << "Private Function Derived1 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
	protected:
		void derived1ProFunction()
		{
			cout << "Protected Function Derived1 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
	public:
		void derived1PubFunction()
		{
			cout << "Public Function Derived1 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
};
class derived2 : protected base
{
	private:
		void derived2PriFunction()
		{
			cout << "Private Function Derived2 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
	protected:
		void derived2ProFunction()
		{
			cout << "Protected Function Derived2 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
	public:
		void derived2PubFunction()
		{
			cout << "Public Function Derived2 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
};

class derived3 : public base
{
	private:
		void derived3PriFunction()
		{
			cout << "Private Function Derived3 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
	protected:
		void derived3ProFunction()
		{
			cout << "Protected Function Derived3 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
	public:
		void derived3PubFunction()
		{
			cout << "Public Function Derived3 Class\n";
			//basePriFunction();
			baseProFunction();
			basePubFunction();
		}
	
};
int main()
{
	base b;
	derived1 d1;
	derived2 d2;
	derived3 d3;
	
	//d1.basePubFunction(); 
	//d2.basePubFunction(); 
	d3.basePubFunction(); /* OK */ 
}
