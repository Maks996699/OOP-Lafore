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