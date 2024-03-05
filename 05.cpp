#include <iostream>
using namespace std;
class publication
{
	private:
		char title[20];
		float price;
	public:
		getPublicationData()
		{
			cout << "Enter title : "; 
			cin >> title;
			cout << "Enter price : ";
			cin >> price;
		}
		putPublicationData()
		{
			cout << "Title = " << title << endl;
			cout << "Price = " << price << endl;
		}
};

class book : public publication
{
	private:
		int page;
	public:
		void getBookData()
		{
			getPublicationData();
			cout << "Enter number of pages : ";
			cin >> page;
		}
		void putBookData()
		{
			putPublicationData();
			cout << "Pages  = " << page << endl;
		}
};

class tape : public publication
{
	private:
		int time;
	public:
		void getTapeData()
		{
			getPublicationData();
			cout << "Enter playing time : ";
			cin >> time;
		}
		void putTapeData()
		{
			putPublicationData();
			cout << "Playing time = " << time << endl;
		}
};
int main()
{
	book b;
	tape t;
	cout << "Enter Book Information" << endl;
	b.getBookData();
	cout << "Enter Tape Information" << endl;
	t.getTapeData();
	
	cout << "****Book Information****" << endl;
	b.putBookData();
	cout << "****Tape Information****" << endl;
	t.putTapeData();
}
