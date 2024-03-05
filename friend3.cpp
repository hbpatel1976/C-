#include <iostream>
using namespace std;

class Boy; 

class Girl 
{
public:
	void motorCycle(Boy& obj);
};


class Boy 
{
private:
	int keyB;

public:
	Boy(){keyB = 10;}
	friend void Girl::motorCycle(Boy&);
};

void Girl::motorCycle(Boy& objb)
{
	cout << objb.keyB << endl;
}

int main()
{
	Boy objB;
	Girl objG;
	objG.motorCycle(objB);
	return 0;
}

