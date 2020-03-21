#include <iostream>
#include "Exception Handling.h"
#include "Struct.h"
#include <windows.h>
#include "Circle.h"
#include "Enums.h"
#include "Struct with enums.h"
using namespace std;

enum Colours;
void WriteColors(Colours color);
int CountColor(Colours* colors, int count, Colours paint);
int CountRed(Colours* colors, int count);

enum Colours
{
	Red,
	Orange,
	Yellow,
	Green,
	Azure,
	Blue,
	Purple
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	while (true)
	{
		int number = 0;
		cout << "1. Обработка исключений (2.2.1)" << endl;
		cout << "2. Создание структур и объектов структур \nРабота с объектами структур через указатели\n(2.2.3.(1,2,3), 2.2.4.(1,2), 2.2.5.(4,5,6), 2.2.7.(2,3))" << endl;
		cout << "3. WrongPointers() (2.2.4.4)" << endl;
		cout << "4. Структуры и функции" << endl;
		cout << "5. Структуры и динамическая память" << endl;
		cout << "6. Функции-конструкторы" << endl;
		cout << "7. Перечисления" << endl;
		cout << "8. Использование перечисления в структурах" << endl;
		cout << "0. Выход" << endl;

		cin >> number;
		switch (number)
		{
		case 1:
		{
			DemoSort();
		} break;

		case 2:
		{
			while (true)
			{
				cout << "1. Прямоугольник" << endl;
				cout << "2. Рейс" << endl;
				cout << "3. Фильм" << endl;
				cout << "4. Время" << endl;
				cout << "5. Контакты" << endl;
				cout << "6. Плеер" << endl;
				cout << "7. Инфомация о предмете" << endl;

				cin >> number;

				switch (number)
				{
				case 1:
				{
					DemoRectangle();
				} break;

				case 2:
				{
					DemoFlight();
				} break;
				case 3:
				{
					DemoMovie();
				} break;
				case 4:
				{
					DemoTime();
				} break;
				case 5:
				{
					DemoContact();
				} break;
				case 6:
				{
					DemoSong();
				} break;
				case 7:
				{
					DemoDiscipline();
				} break;
				}
			}
		} break;

		case 3:
		{
			WrongPointers();
		} break;

		case 4: 
		{
			DemoReadAndWriteRectangles();
		} break;

		case 5:
		{
			while (true)
			{
				int number = 0;
				cout << "1. 2.2.6.1" << endl;
				cout << "2. 2.2.6.2 и 2.2.6.3" << endl;

				cin >> number;
				switch (number)
				{
					case 1:
					{
						DemoDynamicFlight();
					} break;

					case 2:
					{
						DemoDynamicFlights();
					} break;
				}
			}
		} break;

		case 6:
		{
			DemoTime();
		} break;

		case 7:
		{
			Colours colour[6]{ Blue,Red,Red,Yellow,Green,Orange };
			
			for (int i = 0; i < 6; i++)
			{
				WriteColors(colour[i]);
			}
			cout << "Красный цвет встречается в массиве " << CountRed(colour, 6) << " раз." << endl;
			WriteColors(Yellow);
			cout << " встречается в массиве " << CountColor(colour, 6, Yellow) << " раз." << endl;
			system("pause");
			system("cls");
		} break;

		case 8:
		{
			DemoMovieWithGenre();
		} break;

		case 0: {return -1; } break;

		}
	}
}
////////////////////////////////ENUMS
void WriteColors(Colours color);
int CountRed(Colours* colors, int count);
int CountColor(Colours* colors, int count, Colours paint);
void DemoEnums();
Colours ReadColor();

void DemoEnums()
{
	Colours colour = Orange;
	Week day = Saturday;
	Genre genres = Comedy;
	StudyForm studyForm = Evening;
	Manufacturer manufacturer = OnePlus;
	Season season = Spring;

	Colours StorColors[6]{ Red,Orange,Yellow,Green,Blue,Purple };
	Week Week[7]{ Monday,	Tuesday,	Wednesday,	Thursday,	Friday,	Saturday,	Sunday };
	Genre StorGenres[4]{ Comedy,	Drama,	Thriller,	Action };
	StudyForm StudyFormStorage[4]{ Intramural,	Extramural,	Evening,Distance };
	Manufacturer StorManufacturer[4]{ Samsung,	Apple,	Xiaomi,	OnePlus };
	Season Seasons[4]{ Winter,	Spring,	Summer,	Authumn };
}

void WriteColors(Colours color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Красный цвет" << endl;
			break;
		}
		case Orange:
		{
			cout << "Оранжевый цвет" << endl;
			break;
		}
		case Yellow:
		{
			cout << "Желтый цвет" << endl;
			break;
		}
		case Green:
		{
			cout << "Зеленый цвет" << endl;
			break;
		}
		case Blue:
		{
			cout << "Синий цвет" << endl;
			break;
		}
		case Purple:
		{
			cout << "Фиолетовый цвет" << endl;
			break;
		}
	}
}

Colours ReadColor()
{
	int color;
	cout << "\nВведите число от 0 до 6 (0 – красный, 1 – оранжевый, 2 – желтый, 3 – зеленый, 4 – голубой, 5 – синий, 6 – фиолетовый): " << endl;
	cin >> color;

	Colours paint = (Colours)color;
	return paint;
}

int CountRed(Colours* colors, int count)
{
	int value = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			value++;
		}
	}
	return value;
}

int CountColor(Colours* colors, int count, Colours paint)
{
	int value = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == paint)
		{
			value++;
		}
	}
	return value;
}