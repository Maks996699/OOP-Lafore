#include <iostream>

using namespace std;

class Time
{
public:
	Time();
	Time(int, int, int);
	~Time();
	void transform();
	void Show() const;
	void Set(int, int, int);
	Time operator+(Time) const;
	Time operator++();
	Time operator--();
	Time operator++(int);
	Time operator--(int);

private:
	int hour;
	int minute;
	int second;
};

Time::Time() : hour(0), minute(0), second(0)
{
}

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s)
{
}

Time::~Time()
{
}

void Time::transform()
{
	if (second >= 60)
	{
		second -= 60;
		minute++;
	}
	if (minute >= 60)
	{
		minute -= 60;
		hour++;
	}

	if (second < 0)
	{
		if (minute > 0)				//-:>0:-1
		{
			minute--;
			second = 59;
		}
		if (minute == 0 && hour > 0)	//>0:0:-1
		{
			hour--;
			minute = 59;
			second = 59;
		}
		if (minute == 0 && hour == 0)	//0:0:-1
		{
			second = 0;
		}
	}
	
}

void Time::Show() const
{
	cout << hour << ':' << minute << ':' << second << endl;
}

void Time::Set(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

Time Time::operator+(Time add) const
{
	Time temp;
	temp.hour = hour + add.hour;
	temp.minute = minute + add.minute;
	temp.second = second + add.second;
	temp.transform();
	return temp;
}

Time Time::operator++()
{
	second++;
	transform();
	return Time();
}

Time Time::operator--()
{
	second--;
	transform();
	return Time();
}

Time Time::operator++(int)
{
	++second;
	transform();
	return Time();
}

Time Time::operator--(int)
{
	--second;
	transform();
	return Time();
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
	rez.Show();		//18:59:58
	++rez;
	++rez;
	rez.Show(); //19:00:00
	for (int i = 0; i < 65; i++)
	{
		rez--;
	}
	rez.Show(); //18:58:55
	rez.Set(1, 0, 0);
	rez.Show(); //1:0:0
	--rez;
	rez.Show(); //0:59:59
	rez.Set(0, 0, 1);
	rez.Show(); //0:0:1
	rez--;
	rez--;
	rez.Show(); //0:0:0


	return(0);
}