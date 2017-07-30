#include <iostream>
#include "Int.h"
#include <string>

using namespace std;

//function to display contents of array
void display(int Int[10])
{
	cout << "\nDisplaying UNORDERED contents of array:\n\n";
	for (int i = 0; i < 10; ++i)
		cout << Int[i] << endl;
};
// function to sort from least to greatest
void bubbleSort(int Int[], int arraySize)
{
	int holder, i, b = 0;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 10 - 1; b++)
		{
			if (Int[b] > Int[b + 1])
			{
				holder = Int[b];
				Int[b] = Int[b + 1];
				Int[b + 1] = holder;
			}
		}/*End inner for loop*/
	}/*End outer for loop*/

	//display sorted contents
	cout << "\n\nDisplaying SORTED contents of array:\n\n";

	for (i = 0; i < 10; i++)
	{
		cout << Int[i] << endl;
	}
}

void main()
{
	int Int[10]; //10 element array called Int 
	int total = 0;
		
	// loading array from user input
	for (int i = 0; i < 10; i++)
	{
		cout << " Please enter number: ";
		cin >> Int[i];
	}
	// calling display function
	display(Int);
	//calling sorting function
	bubbleSort(Int, 10);

	system("pause");
}