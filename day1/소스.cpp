#include<iostream>
using namespace std;

int main()
{
	int input, minute, second, hours;
	input = 0;
	const int SEC_PER_MINUTE = 60;
	const int SEC_PER_HOURS = 3600;

	cout << "�ʴ����ǽð����Է��Ͻÿ�:";
	cin >> input;

	hours = input/ SEC_PER_HOURS; //�ð��� ���� �� 60���� ���� ��
	second = input % SEC_PER_MINUTE; //�������� �ʰ� �ȴ� �̿ܿ��� (input %SEC_PER_HOURS)%SEC_PER_MIUTE;
	minute = (input %SEC_PER_HOURS)/SEC_PER_MINUTE; //���� �ð��� ������ ������ ���� ������
	
	//hours=(input/SEC_PER_MINUTE)/SEC_PER_MINUTE; �ʸ� ������ ���� ���� �ٽ� ������ ���� ��
	//second=input%SEC_PER_MINUTE;
	//minute=(input/SEC_PER_MINUTE)% SEC_PER_MINUTE; �ʸ� ������ ���� ���� �ٽ� ������ ���� ������

	cout << input << "�ʴ�" << hours<< "�ð�" <<minute << "��" << second << "���Դϴ�." << endl;

	return 0;
}