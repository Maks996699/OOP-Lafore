#include <iostream>

using namespace std;

const int MAX = 7;

int maxint(int[], int);

int main()
{
	int arr[MAX];
	for (int i = 0; i < MAX; i++)
	{
		cout << "Input " << i + 1 << " element: ";
		cin >> arr[i];
	}
	cout << "Max element is " << arr[maxint(arr, MAX)] << endl;
	return 0;
}

int maxint(int arr[], int size)
{
	int ind;
	int value = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > value)
		{
			value = arr[i];
			ind = i;
		}
	}
	return ind;
}