#include <iostream>
using namespace std;

class Int
{
public:
	Int();
	Int(int);
	void show();
	Int addiction(Int);
	~Int();

private:
	int intager;
};

int main()
{
	Int one(7), two = 10, rez;
	one.show();
	two.show();
	rez.show();
	rez = one.addiction(two);
	rez.show();
	return 0;
}

Int::Int() : intager(0)
{}

Int::Int(int intgr) : intager(intgr)
{}

void Int::show()
{
	cout << intager << endl;
}

Int Int::addiction(Int second)
{
	Int rez;
	rez.intager = intager + second.intager;
	return rez;
}

Int::~Int()
{
}