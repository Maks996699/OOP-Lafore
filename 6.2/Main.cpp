#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth
{
public:
	tollBooth();
	~tollBooth();
	void payingCar();
	void nopayCar();
	void display() const;
private:
	unsigned int count;
	double totalRevenue;
};

tollBooth::tollBooth(): count(0), totalRevenue(0.0)
{
}

tollBooth::~tollBooth()
{
}

void tollBooth::payingCar()
{
	count++;
	totalRevenue += 0.5;
}

void tollBooth::nopayCar()
{
	count++;
}

void tollBooth::display() const
{
	cout << "\nNumber of car: " << count << "\nTotal revenue: " << totalRevenue << endl;
}

int main()
{
	char ch;
	tollBooth one;
	do
	{
		ch = getch();

		if (ch == 49) // 1
		{
			one.payingCar();
		}
		else if (ch == 48) // 0
		{
			one.nopayCar();
		}
		else if (ch != 27)
		{
			cout << "\n 1 or 0 or esc to exit\n";	
		}
	} while (ch != 27);
	one.display();
	return 0;
}