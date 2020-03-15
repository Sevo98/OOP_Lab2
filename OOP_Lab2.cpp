#include <iostream>
#include "Exception Handling.h"
#include "Struct.h"
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	while (true)
	{
		int number = 0;
		cout << "1. Обработка исключений" << endl;
		cout << "2. Создание структур и объектов структур" << endl;
		cout << "3. Работа с объектами структур через указатели" << endl;
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
		}



		case 0: {return -1; } break;

		}
	}
}
