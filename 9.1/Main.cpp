#include<iostream>
#include<string>

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

Publication::Publication(string n, float p) : name(n), price(p)
{
}

Publication::~Publication()
{
}

void Publication::getdata()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input price: ";
	cin >> price;
}

void Publication::putdata()
{
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
}


class Book : public Publication
{
public:
	Book();
	Book(int);
	~Book();
	void getdata();
	void putdata();

private:
	int number_of_page;
};

Book::Book() : number_of_page(0)
{
}

Book::Book(int nop) : number_of_page(nop)
{
}

Book::~Book()
{
}

void Book::getdata()
{
	cout << "Input number of pages: ";
	cin >> number_of_page;
}

void Book::putdata()
{
	cout << "Number of pages: " << number_of_page << endl;
}


class Type : public Publication
{
public:
	Type();
	Type(float);
	~Type();
	void getdata();
	void putdata();

private:
	float time_of_min;
};

Type::Type() : time_of_min(0.f)
{
}

Type::Type(float tom) : time_of_min(tom)
{
}

Type::~Type()
{
}

void Type::getdata()
{
	cout << "Input time of reading in minutes: ";
	cin >> time_of_min;
}

void Type::putdata()
{
	cout << "Time of reading in minures: " << time_of_min << endl;
}


int main()
{
	Publication tst1;
	Book tst2;
	Type tst3;
	tst1.getdata();
	tst2.getdata();
	tst3.getdata();
	tst1.putdata();
	tst2.putdata();
	tst3.putdata();

	return 0;
}