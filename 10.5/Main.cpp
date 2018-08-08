#include <iostream>
using namespace std;
const int MAX = 5;
int main()
{
	void addictionarr(int*, int*, int*, int);
	int arr1[MAX] = {5, 10, 16, 84, 65};
	int arr2[MAX] = {4, 18, 26, 23, 17};
	int arr3[MAX] = {};
	addictionarr(arr1, arr2, arr3, MAX);
	int* ptrtemp = arr3;
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << ": " << *ptrtemp++ << endl;
	}

	return 0;
}
void addictionarr(int* arr1, int* arr2, int* arr3, int size)
{
	for (int i = 0; i < size; i++)
	{
		*arr3++ = *arr1++ + *arr2++;
	}
}