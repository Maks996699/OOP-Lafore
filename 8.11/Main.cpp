#include <iostream>

using namespace std;

class Sterling
{
public:
	Sterling();
	Sterling(double);
	Sterling(long, int, int);
	~Sterling();
	void getSterling();
	void putSterling();
	Sterling operator+(Sterling) const;
	Sterling operator-(Sterling) const;
	Sterling operator*(Sterling) const;
	Sterling operator/(Sterling) const;
	operator double() const;

private:
	long funt;
	int shilling;
	int pens;
};

Sterling::Sterling() : funt(0L), shilling(0), pens(0)
{
}

Sterling::Sterling(double s)
{
	funt = static_cast<int>(s);
	s -= funt;
	s *= 20;
	shilling = static_cast<int>(s);
	s -= shilling;
	s *= 12;
	pens = static_cast<int>(s);
}

Sterling::Sterling(long f, int sh, int p) : funt(f), shilling(sh), pens(p)
{
}

Sterling::~Sterling()
{
}

void Sterling::getSterling()
{
	cout << "Founts: " << funt << endl;
	cout << "Shillings: " << shilling << endl;
	cout << "Pens: " << pens << endl;
}

void Sterling::putSterling()
{
	cout << "Input founts: ";
	cin >> funt;
	cout << "Input shillings: ";
	cin >> shilling;
	cout << "Input pens: ";
	cin >> pens;
}

Sterling Sterling::operator+(Sterling s2) const
{
	return Sterling(double(Sterling(funt, shilling, pens)) + double(s2));
}

Sterling Sterling::operator-(Sterling s2) const
{
	return Sterling(double(Sterling(funt, shilling, pens)) - double(s2));
}

Sterling Sterling::operator*(Sterling s2) const
{
	return Sterling(double(Sterling(funt, shilling, pens)) * double(s2));
}

Sterling Sterling::operator/(Sterling s2) const
{
	return Sterling(double(Sterling(funt, shilling, pens)) / double(s2));
}

Sterling::operator double() const
{
	double sterl = 0;
	sterl = (pens / 12.) / 20.;
	sterl += shilling / 20.;
	sterl += funt;
	return sterl;
}

int main()
{
	Sterling s1(7, 17, 9);
	Sterling s3;
	s3.putSterling();
	s1.getSterling();
	s3.getSterling();
	Sterling sS = s1 + s3;
	sS.getSterling();
	sS = s1 / s3;
	sS.getSterling();
	cout << static_cast<double>(sS) << endl;
	return 0;
}