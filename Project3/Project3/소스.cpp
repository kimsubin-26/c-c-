#include<iostream>
using namespace std;

int main()
{
	double celsius, fahrenheit;
	cout << "ȭ��(F) �µ��� �Է��ϼ���:";
	cin >> fahrenheit;
	
	celsius = (fahrenheit - 32) / 1.8;

	cout << fahrenheit << "F��" << celsius << "C �Դϴ�" << endl;


	double cm, inch;
	cout << "cm�� �Է��Ͻÿ�:";
	cin >> cm;
	inch = cm / 2.58;

	cout << cm << "��" << inch << "�Դϴ�" << endl;
		return 0;
}



