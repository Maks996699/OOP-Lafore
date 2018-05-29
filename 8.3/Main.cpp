#include <iostream>

using namespace std;

class Time
{
public:
	Time();
	Time(int, int, int);
	~Time();
	void Show() const;
	Time operator+(Time) const;

private:
	int hour;
	int minute;
	int second;
};

Time::Time() : hour(0), minute(0), second(0)
{
}

Time::Time(int hr, int mn, int sc) : hour(hr), minute(mn), second(sc)
{}

Time::~Time()
{
}

void Time::Show() const
{
	cout << hour << ':' << minute << ':' << second << endl;
}

Time Time::operator+(Time add) const
{
	int hr = hour + add.hour;
	int mn = minute + add.minute;
	if (mn > 59)
	{
		mn -= 60;
		hr++;
	}
	int sc = second + add.second;
	if (sc > 59)
	{
		sc -= 60;
		mn++;
	}
	return Time(hr, mn, sc);
}

int main()
{
	const Time one(12, 59, 59), two(5, 59, 59);
	Time rez;
	one.Show();
	cout << " + ";
	two.Show();
	cout << " = ";
	rez = one + two;
	rez.Show();
	return 0;
}