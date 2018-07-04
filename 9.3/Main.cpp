#include <iostream>
#include <string>

using namespace std;

class Publication
{
public:
	Publication();
	Publication(string, float);
	~Publication();
	void getdata();
	void putdata();

private:
	string name;
	float price;
};

Publication::Publication() : name("N/A"), price(0.f)
{
}

Publication::Publication(string nm, float pr) : name(nm), price(pr)
{
}

Publication::~Publication()
{
}

void Publication::getdata()
{
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
}

void Publication::putdata()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input price: ";
	cin >> price;
}

class Sales
{
public:
	Sales();
	~Sales();
	void getdata();
	void putdata();

private:
	static const int month = 3;
	float arrMonth[month];
};

Sales::Sales() : arrMonth{}
{
}

Sales::~Sales()
{
}

void Sales::getdata()
{
	for (int i = 0; i < month; i++)
	{
		cout << "Sales month " << i + 1 << ": " << arrMonth[i] << endl;
	}
}

void Sales::putdata()
{
	for (int i = 0; i < month; i++)
	{
		cout << "Input sales month " << i + 1 << ": ";
		cin >> arrMonth[i];
	}
}

int main()
{
	


	return 0;
}