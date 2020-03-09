#include <iostream>
#include "Exception Handling.h"
#include <exception>

using namespace std;

void OutputStorage(double* values, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << values[i] << ", ";
	}
}

void Sort(double* values, int count)
{
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	
	OutputStorage(values, count);
	
	if (count <= 0)
		throw "Exception catched!";
	Sort(values, count);
	/*try 
	{
		Sort(values, count);
	}
	catch (exception& e)
	{
		cout << e.what() << "Exception catched" << endl;
	}*/
	

	cout << "\nОтсортированный массив: " << endl;
	OutputStorage(values, count);

	cout << "Присваеваем count значение -1" << endl;
	count = -1;

	if (count <= 0)
		throw "Exception catched!";
	Sort(values, count);
	/*try
	{
		Sort(values, count);
	}
	catch (const exception& e)
	{
		cout << e.what() << "Exception catched" << endl;
		cout << "Ошибка!" << endl;
	}*/
	OutputStorage(values, count);
}
