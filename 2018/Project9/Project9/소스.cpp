#include<iostream>
using namespace std;
int cal_bmi(double ki, double weight);
int check_bmi(double bmi, int age);


int main(void)
{

	int age=0;
	double tall = 0; double weight = 0; int bmi;

	cout << "����� ���̿� Ű, �����Ը� �Է����ֽʽÿ�:";
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

		cout << "������ �� �����ϴ�.";

	else if (19 < age < 29)

	{

		if (bmi < 18)
			cout << "����� ��ü���Դϴ�" << endl;
		else if (18 < bmi < 23)
			cout << "����� ǥ�� ü���Դϴ�" << endl;
		else if (23 < bmi < 30)
			cout << "����� ��ü���Դϴ�." << endl;

		else
			cout << "����� ���Դϴ�." << endl;

	}

	else if (29 < age < 40)

	{

		if (bmi < 18.5)
			cout << "����� ��ü���Դϴ�" << endl;
		else if (18.5 < bmi < 24)
			cout << "����� ǥ�� ü���Դϴ�" << endl;
		else if (24 < bmi < 30)
			cout << "����� ��ü���Դϴ�." << endl;
		else
			cout << "����� ���Դϴ�." << endl;

	}

	return 0;
}