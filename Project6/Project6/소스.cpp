#include<iostream>
using namespace std;

int main()
{
int sum = 0;
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


return 0;

}
