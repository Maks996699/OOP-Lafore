#include <iostream>
#include <string>

using namespace std;

class Publication
{
public:
	Publication();
	Publication(string, float);
	~Publication();
	void getdata() const;
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

void Publication::getdata() const
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
	void getdata() const;
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

void Sales::getdata() const
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

class Book : public Publication, public Sales
{
public:
	Book();
	Book(int, string, float);
	~Book();
	void getdata();
	void putdata();
private:
	int number_of_page;
};

Book::Book() : Publication(), Sales(), number_of_page(0)
{
}

Book::Book(int nop, string nm, float pr) : Publication(nm , pr), Sales() ,number_of_page(nop)
{
}

Book::~Book()
{
}

void Book::getdata()
{
	cout << "Number of page: " << number_of_page << endl;
	Sales::getdata();
}

void Book::putdata()
{
	cout << "Input number of page: ";
	cin >> number_of_page;
	Sales::putdata();
}

class Type : public Publication, public Sales
{
public:
	Type();
	Type(float, string, float);
	~Type();
	void getdata();
	void putdata();

private:
	float time_of_min;
};

Type::Type() : Publication(), Sales(), time_of_min(0)
{
}

Type::Type(float tom, string nm, float pr) : Publication(nm, pr), Sales(), time_of_min(tom)
{
}

Type::~Type()
{
}

void Type::getdata()
{
	cout << "Time of minute: " << time_of_min << endl;
	Sales::getdata();
}

void Type::putdata()
{
	cout << "Input time of minute: ";
	cin >> time_of_min;
	Sales::putdata();
}

int main()
{
	Book test1;
	Type test2;
	test1.getdata();
	test2.getdata();
	test1.putdata();
	test2.putdata();
	test1.getdata();
	test2.getdata();


	return 0;
}