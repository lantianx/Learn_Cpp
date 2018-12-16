
#include "pch.h"
#include <iostream>
using namespace std;
enum ENUM_MONTH { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC=12 };
struct myTimeStruct{
	int year;
	enum ENUM_MONTH month=JAN;
	int day;
	int hour;
	int minite;
	int second;

};
int main()
{
	myTimeStruct myTime{ 2018,JAN,16,13,49,0 };
	int temp;
	cout << "请输入年份";
	cin >> myTime.year;
	cout << "请输入月份（1-12之间的数）";
	cin >> temp;//int temp
	while (12 < temp) {
		cout << "请重新输入1-12之间的数";
		cin >> temp;
	}
	myTime.month = static_cast<ENUM_MONTH>(temp);
	cout << "请输入日";
	cin >> temp;
	while(temp>31){
		cout << "输入的日子不合法，请重新输入";
		cin >> temp;
	}
	myTime.day = temp;
	cout << myTime.year << "/" << myTime.month << "/" << myTime.day;
 	return 0;
}