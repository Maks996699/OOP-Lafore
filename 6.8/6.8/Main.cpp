#include<iostream>
using namespace std;

class Counter
{
public:
	Counter();
	~Counter();
	void MyID_Is();
private:
	static int count;
	const int id;
};

Counter::Counter() : id(count)
{
	count++;
}

Counter::~Counter()
{
}

void Counter::MyID_Is()
{
	cout << "My ID is: " << id << endl;
}

int Counter::count = 1;

int main()
{
	Counter ct1, ct2, ct3;
	ct1.MyID_Is();
	ct2.MyID_Is();
	ct3.MyID_Is();
	return 0;
}