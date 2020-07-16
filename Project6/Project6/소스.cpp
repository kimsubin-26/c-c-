#include<iostream>
using namespace std;

int main()
{
int sum = 0;
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


return 0;

}
