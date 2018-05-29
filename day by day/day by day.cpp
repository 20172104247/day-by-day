// day by day.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class DAte
{
private:
	int year;
	int month;
	int day;
public:
	void display()
	{
		cout << "year=" << year << "month=" << month << "day=" << day << endl;
	};
	void set(int ye, int mo, int dy)
	{
		year = ye;
		month = mo;
		day = dy;
	}
	DAte operator +(DAte & lol)
	{
		DAte uzi;
		uzi.set(year, month, day+1);
		return uzi;
	}

};



int main()
{
	DAte date,A;
	int y, m, d;
	cin >> y >> m >> d;
	date.set(y, m, d);
	A =;
	return 0;
}
