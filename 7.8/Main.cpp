#include <iostream>

using namespace std;

class SafeArray
{
public:
	SafeArray();
	~SafeArray();
	void putel(int index, int value);
	int getel(int index);

private:
	static int const LIMIT = 20;
	int arr[LIMIT];
};

SafeArray::SafeArray()
{
}

SafeArray::~SafeArray()
{
}

int main()
{
	SafeArray sa1;
	int temp = 12345;
	sa1.putel(7, temp);
	cout << sa1.getel(7);
	return 0;
}

void SafeArray::putel(int index, int value)
{
	if ((index < (LIMIT - 1)) && (index > 0))
	{
		arr[index] = value;
	}
	else
	{
		cout << "error: Bad index" << endl;
	}
}

int SafeArray::getel(int index)
{
	if ((index < (LIMIT - 1)) && (index > 0))
	{
		return arr[index];
	}
	else
	{
		cout << "error: Bad index" << endl;
	}
}