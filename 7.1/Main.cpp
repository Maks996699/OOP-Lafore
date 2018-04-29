#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 20;

void reversit(char[]);

int main()
{
	char str[MAX];
	cin.get(str, MAX);
	reversit(str);
	cout << str << endl;

	return 0;
}

void reversit(char arr[])
{
	char temp;
	for (int i = 0, j = (strlen(arr) - 1); i < (strlen(arr) / 2); i++ , j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}