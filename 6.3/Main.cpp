#include <iostream>
using namespace std;

class Time
{
public:
	Time();
	Time(int, int, int);
	~Time();
	void show() const;
	void addiction(Time, Time);

private:
	int hour;
	int minute;
	int second;
};

Time::Time(): hour(0), minute(0), second(0)
{}

Time::Time(int hr, int mn, int sc): hour(hr), minute(mn), second(sc)
{}

Time::~Time()
{}

void Time::show() const
{ cout << hour << ':' << minute << ":" << second << endl; }

void Time::addiction(Time one, Time two)
{
	hour = one.hour + two.hour;
	minute = one.minute + two.minute;
	second = one.second + two.second;
}

int main()
{
	const Time one1(12, 16, 18), two2(5, 8, 2);
	Time rez;
	one1.show();
	cout << " + ";
	two2.show();
	cout << " = ";
	rez.addiction(one1, two2);
	rez.show();

	return 0;
}