#include <iostream>
using namespace std;


class Angle
{
public:
	Angle();
	Angle(int, float, char);
	~Angle();
	void set();
	void show() const;
private:
	int degrees;
	float seconds;
	char route;
};

Angle::Angle(): degrees(0), seconds(0), route(0)
{}

Angle::Angle(int d, float s, char r): degrees(d), seconds(s), route(r)
{}

Angle::~Angle()
{}

void Angle::set()
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
			route == 'S' || 
			route == 'W' || 
			route == 'E')
		{
			swch = false;
		}
		else
		{
			cout << "N or S or W or E\n";
		}
		
	} while (swch);
}

void Angle::show() const
{
	cout << degrees << "\xF8" << seconds << "' " << route << endl;
}

int main()
{
	Angle test;
	test.set();
	test.show();
	return 0;
}