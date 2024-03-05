#include <iostream>
using namespace std;
class Complex
{
	private:
		int realData, imaginaryData;
	public:
		Complex(){realData=0; imaginaryData=0;}
		Complex(int r, int i){realData=r; imaginaryData=i;}
		Complex operator - (Complex paramterObject)
		{
			Complex returnObject;
			returnObject.realData = realData - paramterObject.realData;
			returnObject.imaginaryData = imaginaryData - paramterObject.imaginaryData;
			return returnObject;
		}
		void showComplex()
		{
			cout << "Real data = " << realData << " Imaginary Data = " << imaginaryData << endl;
		}
};
int main()
{
	Complex C1(20,40), C2(7, 11), C3;
	C3 = C1 - C2;
	C3.showComplex();
}
