#include<iostream>
using namespace std;
int cal_bmi(double ki, double weight);
int check_bmi(double bmi, int age);


int main(void)
{

	int age=0;
	double tall = 0; double weight = 0; int bmi;

	cout << "당신의 나이와 키, 몸무게를 입력해주십시오:";
	cin >> age; cin >> tall; cin >> weight;

	check_bmi(bmi, age);
	cal_bmi(tall, weight);


	return 0;
	
}
int cal_bmi(double tall,double weight)
{

	int bmi=0;
	bmi = weight / (tall/100*tall/100);
	
	return 0;
}
int check_bmi(double bmi,int age)
{
	if (age < 20)

		cout << "측정할 수 없습니다.";

	else if (19 < age < 29)

	{

		if (bmi < 18)
			cout << "당신은 저체중입니다" << endl;
		else if (18 < bmi < 23)
			cout << "당신은 표준 체중입니다" << endl;
		else if (23 < bmi < 30)
			cout << "당신은 과체중입니다." << endl;

		else
			cout << "당신은 비만입니다." << endl;

	}

	else if (29 < age < 40)

	{

		if (bmi < 18.5)
			cout << "당신은 저체중입니다" << endl;
		else if (18.5 < bmi < 24)
			cout << "당신은 표준 체중입니다" << endl;
		else if (24 < bmi < 30)
			cout << "당신은 과체중입니다." << endl;
		else
			cout << "당신은 비만입니다." << endl;

	}

	return 0;
}