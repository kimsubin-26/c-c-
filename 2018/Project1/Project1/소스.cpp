#include<iostream>
using namespace std;//이름공간설정
int main()
{
	int x;
	int y;
	// <값 할당 부분>

	x = 10;
	y = 2;

	if (x > 4)
	{
		if (y > 2)
		{
			cout << x * y << endl;
		}
	}
	else
	{
		cout<< "" <<endl;
	}
}