#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void display(){cout << "Virtual Display Function in Animal Class\n";}
    void show(){cout << "Regular Show Function in Animal Class\n";}
};

class Tiger : public Animal
{
public:
	void display() {cout << "Regular Display Function in Tiger Class\n";}
	void show(){cout << "Regular Show Function in Tiger Class\n";}
};

int main()
{

Animal *a;
Tiger t;
a = &t;
a->display();
a->show();
}
