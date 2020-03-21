#pragma once

enum Colors;
enum Week;
enum Genre;
enum StudyForm;
enum Manufacturer;
enum Season;

void WriteColors(Colors color);
int CountRed(Colors* colors, int count);
int CountColor(Colors* colors, int count, Colors paint);