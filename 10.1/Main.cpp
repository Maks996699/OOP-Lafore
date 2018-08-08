#include <iostream>
using namespace std;
const int MAX = 5;
int main()
{
	float average(float*);
	void getarr(float*);
	float arr[MAX] = {};
	float* arr1 = arr;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Input value " << i + 1 << ": ";
		cin >> *arr1++;
	}
	getarr(arr);
	cout << average(arr) << endl;
	
	return 0;
}

void getarr(float* arrptr)
{
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << ": " << *arrptr++ << endl;
	}
}

float average(float* arrptr)
{
	float answer = 0;
	for (int i = 0; i < MAX; i++)
	{
		answer += *arrptr++;
	}
	answer /= MAX;
	return answer;
}