#include<iostream>

using namespace std;

//���̿� Ű, �����Կ� ���� �񸸵� üũ�ϴ� ���α׷�(18.04.17)

int main()

{

	int age;
	double tall; double weight;
	double bmi; double ki;

	cout << "����� ���̿� Ű, �����Ը� �Է����ֽʽÿ�.";
	cin >> age; cin >> tall; cin >> weight;
	ki = tall / 100;
	bmi = weight / (ki*ki);

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
	cout << endl;

	//1~n������ ��

	{int sum = 0;
	int n;
	cout << "����� �Է��Ͻÿ�:";
	cin >> n;
	if (0 < n)
	{
		for (int i = 1; i <= n; i++)
			sum += i;
		cout << "1���� 10������ ����� ��=" << sum << endl;
	}
	else

		cout << "�����Ҽ������ϴ�" << endl; 
	}

	cout << endl;
	
	//�ﰢ�� �����

	int x = 0, y = 0;
	int j;
	cout << "�ﰢ���� ����� ���� Ȧ���� �Է����ֽÿ�:";
	cin >> j;

	if (j <= 0 || 0 == j % 2)
	{
		cout << "������ �� �����ϴ�. ���ڸ� �ٽ� �Է����ּ���.";
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