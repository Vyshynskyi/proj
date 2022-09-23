#include<iostream>
using namespace std;
int main()
class Date;
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d);
	Date(int d, int m);
	Date(int d, int m, int y);
	void Print()const;
};
Date::Date(int d)
{
	day = d;
}
Date::Date(int d, int m) :Date(d)
{
	month = m;
}
Date::Date(int d, int m, int y) :Date(d,m)
{
	y = year;
}
void Date::Print()const
{
	if (month < 10)
	{
		cout << daay << "/0" << month << "/" << year << endl;
	}
	else
	{
		cout << day << "/" << month << "/" << year << endl;
	}
	cout << day << "/" << month << "/" << year << endl;
}
int main()
{
	Date a(14, 9, 2022);
	a.Print();
}