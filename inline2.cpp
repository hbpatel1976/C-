#include <iostream>
using namespace std;
class myMath
{
	public:
		int factorial(int);
};
inline int myMath:: factorial(int n)
{
	int answer=1;
	for(int i=2; i<=n; ++i)answer*=i;
	return answer;
}
int main()
{
	myMath obj;
	cout << "Factorial of 5 = " << obj.factorial(5);
}
