#include <iostream>
using namespace std;
class Father
{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
};
class Son1 : private Father
{
	private:
		int a;
		void func() {a=y+z;}
	protected:
		int b;
	public:
		int c;
};

class Son2 : protected Father
{
	private:
		int d;
		void func() {d=y+z;}
	protected:
		int e;
	public:
		int f;	
};

class Son3 : public Father
{
	private:
		int g;
		void func() {g=y+z;}
	protected:
		int h;
	public:
		int i;
};

int main()
{
	Father objf;
	Son1 objs1;
	Son2 objs2;
	Son3 objs3;	
}
