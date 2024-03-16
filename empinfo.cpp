#include <iostream>
#include "gotoxy.h"
using namespace std;

void all(string a[],int by, int r)
{
	int age;

	gotoxy(60, 15); cout << "Fullname:";
	gotoxy(60, 16); cout << "Position :";
	gotoxy(60, 17); cout << "Department:";
	gotoxy(60, 18); cout << "Rate per day:";
	//gotoxy(60, 19); cout << "Rate a week:";
	gotoxy(60, 19); cout << "Birthday:";
	gotoxy(60, 20); cout << "Age:";

	for (int i = 0; i < 3; i++)
	{
		gotoxy(70, 15 + i); cout << a[i];
	}
	gotoxy(74, 18); cout << r;
	//gotoxy(74, 19); cout << rw;
	gotoxy(70, 20); cout << a[3] << " " << a[4] << " " << by;
	age = 2024 - by;
	gotoxy(67, 21); cout << age;
}
