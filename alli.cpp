#include <iostream>
#include "gotoxy.h"

using namespace std;

void allinfo(string n[], int by, int a)
{
	int age;
	
	gotoxy(55, 15);
	cout << "Fullname:";
	gotoxy(55, 16);
	cout << "Address:";
	gotoxy(55, 17);
	cout << "Course:";
	gotoxy(55, 18);
	cout << "Section:";
	gotoxy(55, 19);
	cout << "Birthday:";
	gotoxy(55, 20);
	cout << "Age:";
	gotoxy(55, 21);
	cout << "Average test score";

	for (int i = 0; i < 4; i++)
	{
		gotoxy(67, 15 + i);
		cout << n[i];
	}
	gotoxy(67, 19); cout << n[4] << " " << n[5] << " " << by;

	age = 2024 - by;

	gotoxy(67, 20); cout << age;

	gotoxy(75, 21); cout << a;

}