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
	string Name = "", Email = "", AddInf = "";
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

		cout << "1. Задание 2.2.3.2" << endl;
		cout << "2. Задание 2.2.3.3" << endl;

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
			int size;
			cout << "Введите размер массива: ";
			cin >> size;
			Rectangle* StorRectangle = new Rectangle[size];
			
			for (int i = 0; i < size; i++)
			{
				cout << "Введите длину " << i << "-го" << " прямоугольника (положительное число):" << endl;
				cin >> StorRectangle[i].length;
				cout << "\nВведите ширину " << i << "-го" << " прямоугольника (положительное число):" << endl;
				cin >> StorRectangle[i].width;
			}
			for (int i = 0; i < size; i++)
			{
				cout << "\nПрямоугольник " << i << " имеет размеры: " << StorRectangle[i].length << "X" << StorRectangle[i].width << endl;
			}
			delete[] StorRectangle;
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
		cin.ignore(32767, '\n');
		switch (value)
		{
			case 1:
			{
				Flight NewFlight;
				cout << "Введите пункт вылета: " << endl;
				getline(cin, NewFlight.DeparturePoint);
				cout << "\nВведите пункт назначения: " << endl;
				getline(cin, NewFlight.Destination);
				cout << "\nВведите время полета в минутах: " << endl;
				cin >> NewFlight.DurationTimeMin;

				cout << "Время полета рейса " << NewFlight.DeparturePoint << " - "
					<< NewFlight.Destination << " составляет " << NewFlight.DurationTimeMin << " минут." << endl;
			} break;
			case 2:
			{
				int size;
				cout << "Введите размер массива: ";
				cin >> size;
				Flight* StorFlight = new Flight[size];
				cin.ignore(32767, '\n');

				for (int i = 0; i < size; i++)
				{
					cout << "Введите пункт вылета "<< i <<"-го рейса: " << endl;
					getline(cin, StorFlight[i].DeparturePoint);
					cout << "\nВведите пункт назначения: " << i << "-го рейса:" << endl;
					getline(cin, StorFlight[i].Destination);
					cout << "\nВведите время полета в минутах: " << endl;
					cin >> StorFlight[i].DurationTimeMin;
				}

				for (int i = 0; i < size; i++)
				{
					cout << "Время полета рейса №" << i << endl << StorFlight[i].DeparturePoint << " - "
						<< StorFlight[i].Destination << " составляет " << StorFlight[i].DurationTimeMin << " минут." << endl;
				}

				delete[] StorFlight;
			} break;
		}
	}
}

void DemoMovie()
{
	while (true)
	{
		int value = 0;

		cout << "1. Задание 2.2.3.2" << endl;
		cout << "2. Задание 2.2.3.3" << endl;
		cin >> value;
		cin.ignore(32767, '\n');
		switch (value)
		{
			case 1:
			{
				Movie NewMovie;
				cout << "Введите название фильма: " << endl;
				getline(cin, NewMovie.Title);
				cout << "\nВведите жанр фильма: " << endl;
				getline(cin, NewMovie.Genre);
				cout << "\nВведите год выпуска фильма: " << endl;
				cin >> NewMovie.YearIssue;
				cout << "\nВведите продолжительность фильма: " << endl;
				cin >> NewMovie.DurationMovieMin;
				cout << "\nВведите рейтинг фильма: " << endl;
				cin >> NewMovie.Rating;
				
				cout << "Фильм " << NewMovie.Title << " в жанре " <<
					NewMovie.Genre << " с оценкой " 
					<< NewMovie.Rating << " длится " 
					<< NewMovie.DurationMovieMin << " минут." << endl;

			} break;
			case 2:
			{
				int size;
				cout << "Введите размер массива: ";
				cin >> size;
				Movie* StorMovie = new Movie[size];
				cin.ignore(32767, '\n');

				for (int i = 0; i < size; i++)
				{
					cout << "Введите название "<< i <<"-го фильма: " << endl;
					getline(cin, StorMovie[i].Title);
					cout << "\nВведите жанр фильма: " << endl;
					getline(cin, StorMovie[i].Genre);
					cout << "\nВведите год выпуска фильма: " << endl;
					cin >> StorMovie[i].YearIssue;
					cout << "\nВведите продолжительность фильма: " << endl;
					cin >> StorMovie[i].DurationMovieMin;
					cout << "\nВведите рейтинг фильма: " << endl;
					cin >> StorMovie[i].Rating;
				}

				for (int i = 0; i < size; i++)
				{
					cout << "Фильм " << StorMovie[i].Title << " в жанре " <<
						StorMovie[i].Genre << " с оценкой "
						<< StorMovie[i].Rating << " длится "
						<< StorMovie[i].DurationMovieMin << " минут." << endl;
				}
			} break;
		}
	}
}

void DemoTime()
{
	while (true)
	{
		int value = 0;

		cout << "1. Задание 2.2.3.2" << endl;
		cout << "2. Задание 2.2.3.3" << endl;
		cin >> value;
		switch (value)
		{
			case 1:
			{
				Time NewTime;
				cout << "Введите часы: (не более 24)" << endl;
				cin >> NewTime.Hour;
				if (NewTime.Hour	>	24)
				{
					cout << "\nНеправильный формат времени!" << endl;
					break;
				}
				cout << "\nВведите минуты: (не более 60)" << endl;
				cin >> NewTime.Min;
				if (NewTime.Min > 60)
				{
					cout << "\nНеправильный формат времени!" << endl;
					break;
				}
				cout << "\nВведите секунды: (не более 60)" << endl;
				cin >> NewTime.Sec;
				if (NewTime.Sec > 60)
				{
					cout << "\nНеправильный формат времени!" << endl;
					break;
				}

				cout << endl << NewTime.Hour << ":" 
					<< NewTime.Min << ":" << NewTime.Sec << endl;
			} break;
			case 2:
			{
				int size;
				cout << "Введите размер массива: ";
				cin >> size;
				Time* StorTime = new Time[size];

				for (int i = 0; i < size; i++)
				{
					cout << "Введите часы: (не более 24)" << endl;
					cin >> StorTime[i].Hour;
					if (StorTime[i].Hour > 24)
					{
						cout << "\nНеправильный формат времени!" << endl;
						break;
					}
					cout << "\nВведите минуты: (не более 60)" << endl;
					cin >> StorTime[i].Min;
					if (StorTime[i].Min > 60)
					{
						cout << "\nНеправильный формат времени!" << endl;
						break;
					}
					cout << "\nВведите секунды: (не более 60)" << endl;
					cin >> StorTime[i].Sec;
					if (StorTime[i].Sec > 60)
					{
						cout << "\nНеправильный формат времени!" << endl;
						break;
					}
				}

				for (int i = 0; i < size; i++)
				{
					cout << endl << i << ". " << StorTime[i].Hour << ":"
						<< StorTime[i].Min << ":" << StorTime[i].Sec << endl;
				}
				delete[] StorTime;
			} break;
		}
	}
}

void DemoContact()
{
	while (true)
	{
		int value = 0;

		cout << "1. Задание 2.2.3.2" << endl;
		cout << "2. Задание 2.2.3.3" << endl;
		cin >> value;
		cin.ignore(32767, '\n');
		switch (value)
		{
			case 1:
			{
				Contact NewContact;
				cout << "Введите имя контакта: " << endl;
				getline(cin, NewContact.Name);
				cout << "\nВведите телефонный номер: " << endl;
				cin >> NewContact.Number;
				cin.ignore(32767, '\n');
				cout << "\nВведите Email" << endl;
				getline(cin, NewContact.Email);
				cout << "\nВведите дополнительную информацию" << endl;
				getline(cin, NewContact.AddInf);

				cout << "Имя: " << NewContact.Name <<
					"\nТелефон: " << NewContact.Number <<
					"\nEmail: " << NewContact.Email <<
					"\nДополнительная информация: \n"
					<< NewContact.AddInf << endl;
			} break;

			case 2:
			{
				int size;
				cout << "Введите размер массива: ";
				cin >> size;
				cin.ignore(32767, '\n');
				Contact* ContactBook = new Contact[size];

				for (int i = 0; i < size; i++)
				{
					cout << "Введите имя контакта: " << endl;
					getline(cin,ContactBook[i].Name);
					cout << "\nВведите телефонный номер: " << endl;
					cin >> ContactBook[i].Number;
					cin.ignore(32767, '\n');
					cout << "\nВведите Email" << endl;
					getline(cin, ContactBook[i].Email);
					cout << "\nВведите дополнительную информацию" << endl;
					getline(cin, ContactBook[i].AddInf);
				}

				for (int i = 0; i < size; i++)
				{
					cout << "__________________________________________ \n" <<
						"Имя: " << ContactBook[i].Name <<
						"\nТелефон: " << ContactBook[i].Number <<
						"\nEmail: " << ContactBook[i].Email <<
						"\nДополнительная информация: \n"
						<< ContactBook[i].AddInf << endl;
				}
				delete[] ContactBook;
			} break;
		}
	}
}

void DemoSong()
{
	while (true)
	{
		int value = 0;

		cout << "1. Задание 2.2.3.2" << endl;
		cout << "2. Задание 2.2.3.3" << endl;
		cin >> value;
		cin.ignore(32767, '\n');
		switch (value)
		{
			case 1:
			{
				Song NewSong;
				cout << "Введите название трека: " << endl;
				getline(cin, NewSong.SongName);
				cout << "\nВведите исполнителя: " << endl;
				getline(cin, NewSong.Artist);
				cout << "\nВведите продолжительность трека в секундах: " << endl;
				cin >> NewSong.DurationSongSec;

				cout << "Название:\n" << NewSong.SongName <<
					"\nИсполнитель:\n" << NewSong.Artist <<
					"\nПродолжительность:\n" << NewSong.DurationSongSec << endl;
			} break;
			case 2:
			{
				int size;
				cout << "Введите размер плейлиста: ";
				cin >> size;
				cin.ignore(32767, '\n');
				Song* Playlist = new Song[size];

				for (int i = 0; i < size; i++)
				{
					cout << "Введите название трека: " << endl;
					getline(cin, Playlist[i].SongName);
					cout << "\nВведите исполнителя: " << endl;
					getline(cin, Playlist[i].Artist);
					cout << "\nВведите продолжительность трека в секундах: " << endl;
					cin >> Playlist[i].DurationSongSec;
				}

				for (int i = 0; i < size; i++)
				{
					cout << "__________________________________________ \n" <<
						"Название:\n" << Playlist[i].SongName <<
						"\nИсполнитель:\n" << Playlist[i].Artist <<
						"\nПродолжительность:\n" << Playlist[i].DurationSongSec << endl;
				}
				delete[] Playlist;
			} break;
		}
	}
}

void DemoDiscipline()
{
	while (true)
	{
		int value = 0;

		cout << "1. Задание 2.2.3.2" << endl;
		cout << "2. Задание 2.2.3.3" << endl;
		cin >> value;
		switch (value)
		{
			case 1:
			{
				Discipline NewDiscipline;
				cout << "Введите название дисциплины: " << endl;
				getline(cin, NewDiscipline.NameDiscipline);
				cout << "\nВведите имя преподавателя: " << endl;
				getline(cin, NewDiscipline.TeacherName);
				cout << "\nВведите количество часов на дисциплину: " << endl;
				cin >> NewDiscipline.DurationDispH;
				cout << "\nВведите оценку за предмет: " << endl;
				cin >> NewDiscipline.StudRating;

				cout << "Дисциплина: " << NewDiscipline.NameDiscipline <<
					"\nПреподаватель: " << NewDiscipline.TeacherName <<
					"\nЧасы: " << NewDiscipline.DurationDispH <<
					"\nОценка: " << NewDiscipline.DurationDispH << endl;
			} break;
			case 2:
			{
				int size;
				cout << "Введите размер массива: ";
				cin >> size;
				cin.ignore(32767, '\n');
				Discipline* StorDiscipline = new Discipline[size];
				for (int i = 0; i < size; i++)
				{
					cout << "Введите название дисциплины: " << endl;
					getline(cin, StorDiscipline[i].NameDiscipline);
					cout << "\nВведите имя преподавателя: " << endl;
					getline(cin, StorDiscipline[i].TeacherName);
					cout << "\nВведите количество часов на дисциплину: " << endl;
					cin >> StorDiscipline[i].DurationDispH;
					cout << "\nВведите оценку за предмет: " << endl;
					cin >> StorDiscipline[i].StudRating;
				}

				for (int i = 0; i < size; i++)
				{
					cout << "__________________________________________ \n" <<
						"Дисциплина: " << StorDiscipline[i].NameDiscipline <<
						"\nПреподаватель: " << StorDiscipline[i].TeacherName <<
						"\nЧасы: " << StorDiscipline[i].DurationDispH <<
						"\nОценка: " << StorDiscipline[i].DurationDispH << endl;
				}
				delete[] StorDiscipline;
			}
		}
	}
}