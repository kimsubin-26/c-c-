#include<iostream>
using namespace std;

int main()
{
	int year;
	bool result;

	cout << "������ �Է��Ͻÿ�:";
	cin >> year;

	result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; //||�̰� �������� ����
	//������ ���� �ϳ��� ���̸� ��
	(result==1)? cout<< year<<"�� ���� �Դϴ�" : cout << year<<"�� ������ �ƴմϴ�." << endl;

	return 0;
}
