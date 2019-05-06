// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdafx.h"
#include "iostream"
using namespace std;
class CNamudeke
{
private:
	int Year;
	int Month;
	int Day;
	int Hour;
	int Minute;
	int Second;
	int check();
public:
	CNamudeke();
	CNamudeke(int y, int m, int d, int h, int mi, int s);
	CNamudeke()
	{
cout << "被调用了" << endl;
	}
	void print();
	void addoneday();
	int setDay(int y, int m, int d, int h, int mi, int s);
	int BackYear();
	int BackMonth();
	int BackDay();
	int BackHour();
	int BackMinute();
	int BackSecond();
};
CNamudeke::CNamudeke()
{
	Year = 1999;
	Month = 5;
	Day = 20;
	Hour = 17;
	Minute = 6;
	Second = 33;
}
CNamudeke::CNamudeke(int y, int m, int d, int h, int mi, int s)
{
	Year = y;
	Month = m;
	Day = d;
	Hour = h;
	Minute = mi;
	Second = s;
	Year = y;
	Month = m;
	Day = d;
	Hour = h;
	Minute = mi;
	Second = s;
	if (check() == -1 || check() == 1)
	{
		Month = 1;
		Day = 1;
		cout << "输入有误,月日已置1" << endl;
	}
}
int CNamudeke::BackYear()
{
	return Year;
}
int CNamudeke::BackMonth()
{
	return Month;
}
int CNamudeke::BackDay()
{
	return Day;
}
int CNamudeke::BackHour()
{
	return Hour;
}
int CNamudeke::BackMinute()
{
	return Minute;
}
int CNamudeke::BackSecond()
{
	return Second;
}
int CNamudeke::check()
{
	int flatYearDays[12] = { 31,28,31,30,31,31,30,31,30,31 };
	int leapYearDays[12] = { 31,29,31,30,31,31,30,31,30,31 };
	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
	{
		if (Month > 12 || Month < 1)
			return -1;
		if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
		{
			if (leapYearDays[Month - 1] < 1 || Day < 1)
				return 1;
		}
		else {
			if (flatYearDays[Month - 1] < Day) {
				Month++;
				Day = 1;
			}
		}
		if (Month > 12) {
			Year++;
			Month = 1;
		}
	}
	void print()
	{
		cout << Year << "年" << Month << "月" << Day << "日" << Hour << "时" << Minute << "分" << second << "秒" << endl;
	}
	int main()
	{
		int count = 1;
		CNamudeke
			oj(1999.5, 20, 17, 6, 360);
		while (!(oj.BackYear() == 2019) && (oj.BackMonth() == 4) && (oj.BackDay() == 28)))
		{
		oj.AddYearDays();
		count++;
}
		cout << count << endl;
		return 0;
	}