#include <stdio.h>
void main()
{
	void myFunction(void);
	void myFunction(int x);
	
	myFunction();
	myFunction(10);
}
void myFunction(void)
{
	printf("This is myFunction without argument without return value\n");
}
void myFunction(int x)
{
	printf("This is myFunction with one argument %d without return value\n",x);
}
