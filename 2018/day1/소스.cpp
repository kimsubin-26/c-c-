#include<iostream>
using namespace std;

int main()
{
	int input, minute, second, hours;
	input = 0;
	const int SEC_PER_MINUTE = 60;
	const int SEC_PER_HOURS = 3600;

	cout << "초단위의시간을입력하시오:";
	cin >> input;

	hours = input/ SEC_PER_HOURS; //시간은 분을 또 60으로 나눈 몫
	second = input % SEC_PER_MINUTE; //나머지가 초가 된다 이외에도 (input %SEC_PER_HOURS)%SEC_PER_MIUTE;
	minute = (input %SEC_PER_HOURS)/SEC_PER_MINUTE; //분은 시간을 분으로 나누고 남은 나머지
	
	//hours=(input/SEC_PER_MINUTE)/SEC_PER_MINUTE; 초를 분으로 나눈 몫을 다시 분으로 나눈 몫
	//second=input%SEC_PER_MINUTE;
	//minute=(input/SEC_PER_MINUTE)% SEC_PER_MINUTE; 초를 분으로 나눈 몫을 다시 분으로 나눈 나머지

	cout << input << "초는" << hours<< "시간" <<minute << "분" << second << "초입니다." << endl;

	return 0;
}