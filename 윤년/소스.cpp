#include<iostream>
using namespace std;

int main()
{
	int year;
	bool result;

	cout << "연도를 입력하시오:";
	cin >> year;

	result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; //||이걸 기준으로 왼쪽
	//오른쪽 둘중 하나만 참이면 됨
	(result==1)? cout<< year<<"는 윤년 입니다" : cout << year<<"는 윤년이 아닙니다." << endl;

	return 0;
}
