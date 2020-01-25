#include <iostream>
#include <string>
using namespace std;

int main()
{
	string* ptr[2];//Declaring array of pointers, which type is string
	string daysOfWeek[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	//Declaring array of string type and initialization with the days of week
	ptr[0] = daysOfWeek;//First pointer point to the first ellement of the array of strings
	ptr[1] = daysOfWeek + 6;//Second pointer points to the seventh element of the array of string

	int arr[2], sum = 0;
	cout << "Type work day and rest day(1-7): ";
	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 2; i++)
	{
		int* ptr = &arr[i];
		sum += *ptr;
	}
	if (sum == 7)
	{
		cout << "Everything is OK";
	}
	else
	{
		cout << "Sum of the days should be equal to 7";
	}
}


