#include<iostream>
using namespace std;

int main()
{
	double radius;
	double length;
	cout << "Eneter the radius and length of a cylinder";
	cin >> radius; cin >> length;

	double area = radius * radius*3.141592;
		cout << "The area is" << area << endl;

		double volume = area * length*3.141592;
			cout << "The volume is" << volume << endl;


	
	int why;
	cout << "Enter the number between 0 and 1000:";
	cin >> why;

	int a = why / 100;
		int b = (why / 10) % 10;
		int c = why % 10;

		int result = a + b + c;

		cout << "The sum of the digits is " << result;


	int minute, hours, days, years;

	cout << "Enter the number of minute:";
	cin >> minute;

	hours = minute / 60;
	years = (hours / 24) / 365;
	days = (hours / 24) % 365;

	cout << minute << "is approximetly" << years << "years and" << days << "days";

	return 0;
}

	