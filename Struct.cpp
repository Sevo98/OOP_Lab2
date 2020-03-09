#include <iostream>
#include "Struct.h"

using namespace std;

struct Rectangle
{
	double length, width;
	string color;
};

struct Flight
{
	string DeparturePoint, Destination;
	int DurationTimeMin;
};

struct Movie
{
	string Title, Genre;
	int YearIssue, DurationMovieMin;
	double Rating;
};

struct Time
{
	int Hour, Min, Sec;
};

struct Contact
{
	string Name, Email;
	int Number;
};

struct Song
{
	string SongName, Artist;
	int DurationSongSec;
};

struct Discipline
{
	string NameDiscipline, TeacherName;
	int DurationDispH, StudRating;
};