#include <iostream>
#include <string>
using namespace std;

bool isInterval(int array[])
{
	for (int i = 0; i < 2; i++)
	{
		int* ptr = &array[i];
		if (*ptr >= 1 || *ptr > 7 || *ptr < 1 || *ptr > 7 || *ptr == 0)
		{
			return false;
		}
		else
		{
			return true;
		}

	}
}

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
		cout << "Everything is OK" << endl;
	}
	else if (sum != 7)
	{
		if (isInterval(arr) == false)
		{
			cout << "Numbers should be between 1 and 7" << endl;
			cout << "Run the program again and type new numbers" << endl;
		}
		else
		{
			cout << "Sum of the days should be equal to 7" << endl;
			cout << "Run the program again and type new days" << endl;
		}

	}

}


