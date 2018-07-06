#include <iostream>
#include <string>

using namespace std;
enum typeDisk { CD, DVD };
//------------------------------
class Publication
{
public:
	Publication();
	Publication(string, float);
	~Publication();
	void getPubl() const;
	void putPubl();
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

void Publication::getPubl() const
{
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
}

void Publication::putPubl()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input price: ";
	cin >> price;
}

//------------------------------

class Sales
{
public:
	Sales();
	~Sales();
	void getSales() const;
	void putSales();

private:
	static const int arrSize = 3;
	float arr[arrSize];
};

Sales::Sales() : arr{}
{
}

Sales::~Sales()
{
}

void Sales::getSales() const
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Sales month " << i + 1 << ": " << arr[i] << endl;
	}
}

void Sales::putSales()
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Input sales month" << i + 1 << ": ";
		cin >> arr[i];
	}
}

//------------------------------

class Type : public Publication, public Sales
{
public:
	Type();
	Type(float, string, float);
	~Type();
	void getType() const;
	void putType();

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

void Type::getType() const
{
	Publication::getPubl();
	cout << "Time of minute: " << time_of_min << endl;
	Sales::getSales();
}

void Type::putType()
{
	Publication::putPubl();
	cout << "Input time of minute: ";
	cin >> time_of_min;
	Sales::putSales();
}

//------------------------------

class Book : public Publication, public Sales
{
public:
	Book();
	Book(int, string, float);
	~Book();
	void getBook() const;
	void putBook();

private:
	int number_of_pages;
};

Book::Book() : Publication(), Sales(), number_of_pages(0)
{
}

Book::Book(int nop, string nm, float pr) : Sales(), Publication(nm, pr), number_of_pages(nop)
{
}

Book::~Book()
{
}

void Book::getBook() const
{
	Publication::getPubl();
	cout << "Number of pages: " << number_of_pages << endl;
	Sales::getSales();
}

void Book::putBook()
{
	Publication::putPubl();
	cout << "Input number of pages: ";
	cin >> number_of_pages;
	Sales::putSales();
}

//------------------------------

class Disk : public Publication
{
public:
	Disk();
	Disk(typeDisk, string, float);
	~Disk();
	void getDisk() const;
	void putDisk();

private:
	typeDisk typeDsk;
};

Disk::Disk() : Publication(), typeDsk(CD)
{
}

Disk::Disk(typeDisk td, string nm, float pr) : Publication(nm, pr), typeDsk(td)
{
}

Disk::~Disk()
{
}

void Disk::getDisk() const
{
	Publication::getPubl();
	switch (typeDsk)
	{
	case CD: cout << "Type disk is: " << "CD" << endl; break;
	case DVD: cout << "Type disk is: " << "DVD" << endl; break;
	default:
		cout << "Error type disk" << endl;
		break;
	}
}

void Disk::putDisk()
{
	Publication::putPubl();
	cout << "Input type disk(c/d): ";
	char buff = '0';
	cin >> buff;
	switch (buff)
	{
	case 'c': typeDsk = CD; break;
	case 'd': typeDsk = DVD; break;
	default:
		cout << "Error type diskk" << endl;
		break;
	}
}

//------------------------------

int main()
{
	Disk testD;
	Book testB;
	Type testT;
	testD.getDisk();
	cout << endl;
	testB.getBook();
	cout << endl;
	testT.getType();
	cout << endl;
	testD.putDisk();
	testB.putBook();
	testT.putType();
	cout << endl;
	testD.getDisk();
	cout << endl;
	testB.getBook();
	cout << endl;
	testT.getType();
	return 0;
}