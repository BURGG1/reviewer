#include <iostream>
#include "gotoxy.h"
#include <string>
#include <conio.h>

using namespace std;

void color(int n)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}
//G1 problem
#include "alli.cpp"
#include "average.cpp"
//G2 problem
#include"emprate.cpp"
#include "empinfo.cpp"

//int main()//G1 long quiz problem
//{
//	int counter = 1;
//	string info[6];
//	int num[5];
//	int byear;
//	char a;
//	int set[] = { 7,7,7,};
//	float ave = 0;
//	for (int i = 0; i < 115; i++)
//	{
//		gotoxy(2 + i, 4); cout << char(196);
//		gotoxy(2 + i, 25); cout << char(196);
//		for (int j = 0; j < 20; j++)
//		{
//			gotoxy(2, 5 + j); cout << char(179);
//			gotoxy(116, 5 + j); cout << char(179);
//		}
//	}
//
//	gotoxy(6, 6); cout << "Enter your Fullname:";   
//	gotoxy(6, 7); cout << "Enter your Address:";
//	gotoxy(6, 8); cout << "Enter your Course:";
//	gotoxy(6, 9); cout << "Enter your Section:";
//	gotoxy(6, 11); cout << "Enter your birthday:";
//	gotoxy(6, 12); cout << "Month:";
//	gotoxy(25, 12); cout << "Day:";
//	gotoxy(40, 12); cout << "Year:";
//	gotoxy(60, 6); cout << "Enter your Test Scores";
//
//	for (int i = 0; i < 4; i++)
//	{
//		gotoxy(30, 6 + i);
//		getline(cin, info[i]);
//	}
//	gotoxy(14, 12);
//	getline(cin, info[4]);
//	gotoxy(29, 12);
//	getline(cin, info[5]);
//	gotoxy(47, 12); cin >> byear;
//
//	for (int i = 0; i < 5; i++)
//	{
//		gotoxy(60, 7 + i);
//		cout << "Score " << i + 1 << ": ";
//		cin >> num[i];
//	}
//		gotoxy(6, 20);
//		cout << "Press Up and Down arrow key to choose";
//a:
//
//	for (int i;;)
//	{
//		set[0] = 7;
//		set[1] = 7;
//		set[2] = 7;
//
//		if (counter == 1)
//		{
//			set[0] = 4;
//		}
//		if (counter == 2)
//		{
//			set[1] = 4;
//		}
//		if (counter == 3)
//		{
//			set[2] = 4;
//		}
//
//		gotoxy(6, 16);
//		color(set[0]);
//		cout << "Display all the information";
//		gotoxy(6, 17);
//		color(set[1]);
//		cout << "Show the average test scores";
//		gotoxy(6, 18);
//		color(set[2]);
//		cout << "Exit";
//
//		a = _getch();
//
//		if (a == 72)
//		{
//			if (counter >= 2 && counter <= 3)
//			{
//				counter--;
//			}
//			else { counter = 3; }
//		}
//		else if (a == 80)
//		{
//			if (counter >= 1 && counter <= 2)
//			{
//				counter++;
//			}
//			else { counter = 1; }
//		}
//		else if (a == 13)
//		{
//			switch (counter)
//			{
//			case 1:
//				allinfo(info, byear, ave);
//				gotoxy(45, 23); system("pause");
//				for (int i = 0; i < 9; i++)
//				{
//					gotoxy(45, 15 + i); cout << string(70, ' ');
//				}
//				goto a;
//				break;
//			case 2:
//				ave = average(num);
//				gotoxy(45, 17); cout << "Average Test Score:" << ave;
//				gotoxy(45, 20); system("pause");
//				for (int i = 0; i < 7; i++)
//				{
//					gotoxy(45, 15 + i); cout << string(70, ' ');
//				}
//				goto a;
//				break;
//			case 3:
//				exit(0);
//				break;
//			}
//          break;
//		}
//	}
//}

int main()// G2 long test problem
{
	string emp[5];
	int rate ,byear, rweek = 0; 
	int counter = 1;// to count the arrow movement
	int s[] = { 7,7,7 };//variable to set color
	char y;//for gotoxy 
	//border
	for (int i = 0; i < 115; i++)
	{
		gotoxy(2 + i, 4); cout << char(205);
		gotoxy(2 + i, 24); cout << char(205);
		for (int j = 0; j < 19; j++)
		{
			gotoxy(2, 5 + j); cout << char(186);
			gotoxy(116, 5 + j); cout << char(186);
		}
	}
	// instruction display for inputs
	gotoxy(7, 5); cout << "Please fill up the following information";
	gotoxy(10, 7); cout << "Fullname:";
	gotoxy(10, 8); cout << "Position :";
	gotoxy(10, 9); cout << "Department:";
	gotoxy(10, 10); cout << "Rate per day:";
	gotoxy(25, 11); cout << "Birthday";
	gotoxy(10, 12); cout << "Month:";
	gotoxy(30, 12); cout << "Day:";
	gotoxy(43, 12); cout << "Year:";
	//inputs process
	for (int i = 0; i < 3; i++)
	{
		gotoxy(25, 7 + i);
		getline(cin, emp[i]);
	}
	gotoxy(25, 10); cin >> rate;
	gotoxy(17, 12); cin >> emp[3];
	gotoxy(37, 12); cin >> emp[4];
	gotoxy(50, 12); cin >> byear;
	//menu X arrowkey
	gotoxy(15, 20); cout << "use arrow up and arrow down key to choose";
a:
	for (int i;;)
	{
	// for ui purposes
		s[0] = 7;
		s[1] = 7;
		s[2]= 7;
		if (counter == 1)// if condition is true the menu text color will change into red
		{
			s[0] = 4;// color picker hehe
			color(7);// to ramain this arrow  >> << color white
			gotoxy(10, 15); cout << " >>";
			gotoxy(40, 15); cout << "<< ";
		}
		else if (counter == 2)
		{
			s[1] = 4;// the number 4 is the color id of red u can change to what ever color id u want
			color(7);
			gotoxy(10, 16); cout << " >>";
			gotoxy(40, 16); cout << "<< ";
		}
		else if (counter == 3)
		{
			s[2] = 4;
			color(7);
			gotoxy(10, 17); cout << " >>";
			gotoxy(40, 17); cout << "<< ";
		}

		gotoxy(15, 15); color(s[0]); cout << "Display all information";
		gotoxy(15, 16); color(s[1]); cout << "Rate per week";
		gotoxy(15, 17); color(s[2]); cout << "Exit";

		y = _getch();

		if (y == 72)//up arrow key
		{
			if (counter >= 2 && counter <= 3)
			{
				counter--; //
			}
			else counter = 3;
	  	}
		else if (y == 80)//down arrow key
		{
			if (counter >= 1 && counter <= 2)
			{
				counter++;
			}
			else counter = 1;
		}
		else if (y == 13)// enter key
		{
			switch (counter)
			{
			case 1:
				all(emp, byear, rate);//process
				gotoxy(60, 23); system("pause");
				for (int i = 0; i < 9; i++)
				{
					gotoxy(60, 15 + i);
					cout << string(40, ' ');
				}
				goto a;
				break;
			case 2:
				rweek = Rate(rate);//process
				gotoxy(60, 17);
				cout << "The rate in a week of the employee is:" << rweek;
				gotoxy(60, 23); system("pause");
				for (int i = 0; i < 9; i++)
				{
					gotoxy(60, 15 + i);
					cout << string(45, ' ');
				}
				goto a;
				break;
			case 3:
				exit(0);
				break;
			}
			break;
		}
	
		if (counter == 1)// condition to erase the chooser arrow  or this thingy (>> <<) HAHAHA
		{
			gotoxy(10, 16);; cout << string(5, ' '); gotoxy(40, 16); cout << string(5, ' ');
			gotoxy(10, 17);; cout << string(5, ' '); gotoxy(40, 17); cout << string(5, ' ');
		}
		else if (counter == 2)
		{
			gotoxy(10, 15);; cout << string(5, ' '); gotoxy(40, 15); cout << string(5, ' ');
			gotoxy(10, 17);; cout << string(5, ' '); gotoxy(40, 17); cout << string(5, ' ');

		}
		else if (counter == 3)
		{
			gotoxy(10, 15);; cout << string(5, ' '); gotoxy(40, 15); cout << string(5, ' ');
			gotoxy(10, 16);; cout << string(5, ' '); gotoxy(40, 16); cout << string(5, ' ');
		}
	
	}


}