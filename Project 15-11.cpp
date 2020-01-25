#include <iostream>
#include <string>
using namespace std;

//function for problem 2
bool isInterval(int array[])//declare function(bool type) with one parameter
{
	for (int i = 0; i < 2; i++)//this loop cycle 2 times
	{
		int* ptr = &array[i];//Declare pointer, which points to the ellements of the array
		if (*ptr >= 1 || *ptr > 7 || *ptr < 1 || *ptr > 7 || *ptr == 0)//check whether  days are between 1 and 7
		{
			return false;//if they are't, return false
		}
		else
		{
			return true;//if they are, return true
		}

	}
}

int main()
{
	//problem 1

	string* ptr[2];//Declaring array of pointers, which type is string
	string daysOfWeek[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	//Declaring array of string type and initialization with the days of week
	ptr[0] = daysOfWeek;//First pointer point to the first ellement of the array of strings
	ptr[1] = daysOfWeek + 6;//Second pointer points to the seventh element of the array of string

	//problem 2

	int days[2], sum = 0;//Declare array with 2 elements from int type, and declare variable for the sum, which for the moment is equal to 0
	cout << "Type count of work days and rest days(1-7): "; ///Tell to person to type 2 numbers
	for (int i = 0; i < 2; i++)//this loop cycle 2 times
	{
		cin >> days[i];//Persin types 2 numbers
	}
	for (int i = 0; i < 2; i++)//this loop cycle 2 times
	{
		int* ptr = &days[i];//Declare pointer, which points to the ellements of the array
		sum += *ptr;//calculate the sum of the elements. The sum is equal to "days[0]+days[1]"
	}
	if (sum == 7)//check whether the sum is equal to 7
	{
		cout << "Everything is OK" << endl;//if the sum is 7 "OK" message will be displayed
	}
	else if (sum != 7)//if previous is wrong check whether the sum is different from 7
	{
		if (isInterval(days) == false)//check whether function isInterval return false
		{
			cout << "Numbers should be between 1 and 7" << endl;//show the mistake
			cout << "Run the program again and type new numbers" << endl;//tell to type new numbers
		}
		else//check whether function isInterval return true
		{
			cout << "Sum of the days should be equal to 7" << endl;//show the mistake
			cout << "Run the program again and type new days" << endl;//tell to type new numbers
		}

	}

	//problem 3

	ptr[0] = daysOfWeek + 4;//First pointer point to the fifth ellement of the array of strings
	ptr[1] = ptr[0] + 1;//Second pointer points to the sixth element of the array of string



}


