#include<iostream>
using namespace std;

int main()
{

	//���� 1��
	double celsius, fahrenheit;
	cout << "ȭ��(F) �µ��� �Է��ϼ���:";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) / 1.8;

	cout << fahrenheit << "F��" << celsius << "C �Դϴ�" << endl;

	//���� 2��
	double cm, inch;
	cout << "cm�� �Է��Ͻÿ�:";
	cin >> cm;
	inch = cm / 2.58;

	cout << cm << "��" << inch << "�Դϴ�" << endl;

	//���� 3��
	int a, b, c;
	int max;
	bool result;
	cout << "0~100������ ������ �Է��Ͻÿ�:";
	cin >> a, cin >> b, cin >> c;
	max = (a > b) ? a : b;
	result = (max>c)? max:c==1;

	(result == 1) ? cout << a<<", "<<b<<", "<<c<<", "<< "�� ���� ū ����" << max << "�Դϴ�" : cout << a << ", " << b << ", " << c << ", " << "�߿��� ���� ū ����" << c << "�Դϴ�" << endl;


	return 0;
}

