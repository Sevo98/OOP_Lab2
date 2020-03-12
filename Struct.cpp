#include <iostream>
#include "Struct.h"

using namespace std;

struct Rectangle
{
	double length = 0, width = 0;
	string color = "";
};

struct Flight
{
	string DeparturePoint = "", Destination = "";
	int DurationTimeMin = 0;
};

struct Movie
{
	string Title = "", Genre = "";
	int YearIssue = 0, DurationMovieMin = 0;
	double Rating = 0;
};

struct Time
{
	int Hour = 0, Min = 0, Sec = 0;
};

struct Contact
{
	string Name = "", Email = "";
	int Number = 0;
};

struct Song
{
	string SongName = "", Artist = "";
	int DurationSongSec = 0;
};

struct Discipline
{
	string NameDiscipline = "", TeacherName = "";
	int DurationDispH = 0, StudRating = 0;
};

void DemoRectangle()
{	
	while (true)
	{
		int value = 0;

		cout << "1. Задание 2.2.3.1" << endl;
		cout << "2. Задание 2.2.3.2" << endl;

		cin >> value;

		switch (value)
		{
		case 1: 
			{
				Rectangle NewRectangle;

				cout << "Введите длину прямоугольника (положительное число):" << endl;
				cin >> NewRectangle.length;
				cout << "\nВведите ширину прямоугольника (положительное число):" << endl;
				cin >> NewRectangle.width;
				cout << "\nПрямоугольник имеет размеры: " << NewRectangle.length << "X" << NewRectangle.width << endl;
			} break;
		case 2:
			{

			} break;

		}
		
	}
}

void DemoFlight()
{
	while (true)
	{
		int value = 0;

		cout << "1. Задание 2.2.3.1" << endl;
		cout << "2. Задание 2.2.3.2" << endl;
		cin >> value;
		switch (value)
		{
			case 1:
			{
				Flight NewFlight;
				cout << "Введите пункт вылета: " << endl;
				cin >> NewFlight.DeparturePoint;
				cout << "\nВведите пункт назначения: " << endl;
				cin >> NewFlight.Destination;
				cout << "\nВведите время полета в минутах: " << endl;
				cin >> NewFlight.DurationTimeMin;

				cout << "Время полета рейса " << NewFlight.DeparturePoint << " - "
					<< NewFlight.Destination << " составляет " << NewFlight.DurationTimeMin << " минут." << endl;
			} break;
		}
	}
}

void DemoMovie()
{
	Movie NewMovie;
}

void DemoTime()
{
	Time NewTime;
}

void DemoContact()
{
	Contact NewContact;
}

void DemoSong()
{
	Song NewSong;
}

void DemoDiscipline()
{
	Discipline NewDiscipline;
}

