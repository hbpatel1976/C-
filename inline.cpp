#include <iostream>
using namespace std;
inline int factorial(int n)
{
	int answer=1;
	for(int i=2; i<=n; ++i)answer*=i;
	return answer;
}
int main()
{
	cout << "Factorial of 5 = " << factorial(5);
}
