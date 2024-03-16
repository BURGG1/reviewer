#include <iostream>
#include "gotoxy.h"

using namespace std;

int Rate(int num)
{
	int days, rw;
	gotoxy(60, 16); cout << "How many days you've worked:";
	cin >> days;

	rw = num * days;

	return rw;
}