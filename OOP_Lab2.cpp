#include <iostream>
#include "Exception Handling.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	while (true)
	{
		int number = 0;
		cout << "1. Обработка исключений" << endl;
		cout << "2. Создание структур" << endl;
		cout << "3. Создание объектов структур" << endl;
		cout << "4. Работа с объектами структур через указатели" << endl;
		cout << "5. Структуры и функции" << endl;
		cout << "6. Структуры и динамическая память" << endl;
		cout << "7. Функции-конструкторы" << endl;
		cout << "8. Перечисления" << endl;
		cout << "9. Использование перечисления в структурах" << endl;
		cout << "0. Выход" << endl;

		cin >> number;
		switch (number)
		{
		case 1:
		{
			DemoSort();
		} break;




		case 0: {return -1; } break;

		}
	}
}
