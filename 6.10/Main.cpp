#include <iostream>
using namespace std;

class Ship
{
public:
	Ship();
	Ship(int, float, char);
	void Set();
	void Show();
	~Ship();
	

private:
	const int id;
	static int countID;
	int degrees;
	float seconds;
	char route;
};

Ship::Ship(): id(countID), degrees(0), seconds(0.0), route(0)
{
	countID++;
}

Ship::Ship(int d, float s, char r) : id(countID), degrees(d), seconds(s), route(r)
{
	countID++;
}

void Ship::Set()
{
	cout << "\nInput degrees: ";
	cin >> degrees;
	cout << "\nInput seconds: ";
	do
	{
		cin >> seconds;
	} while (seconds > 60);
	cout << "\nInput route(N, S, E, W): ";
	bool swch = true;
	do
	{
		cin >> route;
		if (route == 'N' ||
			route == 'E' ||
			route == 'W' ||
			route == 'S')
		{
			swch = false;
		}
		else
		{
			cout << "N or E or S or W, try again\n";
		}
	} while (swch);
}

void Ship::Show()
{
	cout << "ID: " << id << " " << degrees << "\xF8" << seconds << "' " << route << endl;
}

Ship::~Ship()
{}

int Ship::countID = 1;

int main()
{
	Ship shp1, shp2(179, 39.5, 'N'), shp3;
	shp1.Set();
	shp3.Set();
	shp1.Show();
	shp2.Show();
	shp3.Show();
	return 0;
}