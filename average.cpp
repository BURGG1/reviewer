#include <iostream>
#include "gotoxy.h"
using namespace std;

int average(int num[])
{
	float sum = 0, ave;
	for (int i = 0; i < 5; i++)
	{
		sum += num[i];
	}
	ave = sum / 5;

	return ave;
}
