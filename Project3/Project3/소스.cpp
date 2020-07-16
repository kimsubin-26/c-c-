#include<iostream>
using namespace std;

int main()
{
	double celsius, fahrenheit;
	cout << "화씨(F) 온도를 입력하세요:";
	cin >> fahrenheit;
	
	celsius = (fahrenheit - 32) / 1.8;

	cout << fahrenheit << "F는" << celsius << "C 입니다" << endl;


	double cm, inch;
	cout << "cm를 입력하시오:";
	cin >> cm;
	inch = cm / 2.58;

	cout << cm << "는" << inch << "입니다" << endl;
		return 0;
}



