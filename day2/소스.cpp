#include<iostream>
using namespace std;

int main()
{
	int x = 1, y = 1;
	int nextx, nexty;
	nextx = ++x;
	nexty = y++;

	cout << "nextx="<<nextx<<endl << "x=" << x<<endl;
	cout << "nexty="<<nexty<<endl << "y=" << y<<endl;
	
	return 0;
}