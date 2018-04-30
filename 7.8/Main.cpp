#include <iostream>

using namespace std;

class SafeArray
{
public:
	SafeArray();
	~SafeArray();

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