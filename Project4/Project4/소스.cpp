#include<iostream>
using namespace std;

int main()
{

	//과제 1번
	double celsius, fahrenheit;
	cout << "화씨(F) 온도를 입력하세요:";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) / 1.8;

	cout << fahrenheit << "F는" << celsius << "C 입니다" << endl;

	//과제 2번
	double cm, inch;
	cout << "cm를 입력하시오:";
	cin >> cm;
	inch = cm / 2.58;

	cout << cm << "는" << inch << "입니다" << endl;

	//과제 3번
	int a, b, c;
	int max;
	bool result;
	cout << "0~100사이의 정수를 입력하시오:";
	cin >> a, cin >> b, cin >> c;
	max = (a > b) ? a : b;
	result = (max>c)? max:c==1;

	(result == 1) ? cout << a<<", "<<b<<", "<<c<<", "<< "중 에서 큰 수는" << max << "입니다" : cout << a << ", " << b << ", " << c << ", " << "중에서 가장 큰 수는" << c << "입니다" << endl;


	return 0;
}

