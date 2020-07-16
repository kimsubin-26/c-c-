#include<iostream>

using namespace std;

//나이와 키, 몸무게에 따른 비만도 체크하는 프로그램(18.04.17)

int main()

{

	int age;
	double tall; double weight;
	double bmi; double ki;

	cout << "당신의 나이와 키, 몸무게를 입력해주십시오.";
	cin >> age; cin >> tall; cin >> weight;
	ki = tall / 100;
	bmi = weight / (ki*ki);

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
	cout << endl;

	//1~n까지의 합

	{int sum = 0;
	int n;
	cout << "양수를 입력하시오:";
	cin >> n;
	if (0 < n)
	{
		for (int i = 1; i <= n; i++)
			sum += i;
		cout << "1부터 10까지의 양수의 합=" << sum << endl;
	}
	else

		cout << "측정할수없습니다" << endl; 
	}

	cout << endl;
	
	//삼각형 만들기

	int x = 0, y = 0;
	int j;
	cout << "삼각형을 만들기 위한 홀수를 입력해주시오:";
	cin >> j;

	if (j <= 0 || 0 == j % 2)
	{
		cout << "측정할 수 없습니다. 숫자를 다시 입력해주세요.";
	}
	else
	{
		for (y = 0; y < (j / 2) + 1; y++)

		{
			for (x = (j / 2) + 1; x > y - 1; x--)
				cout << " ";
			for (x = 0; x < (2 * y) + 1; x++)
				cout << "*";
			cout << endl;
		}
	}
	cout << endl;
	return 0;

}