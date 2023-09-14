#include <iostream>
using namespace std;
int main() {
	int x, digits;

	cout << "Please enter an integer: ";
	cin >> x;

	if (x < 0)
	{
		x = x * (-1);
	}

	if (x < 10) 
	{
		cout << "The number has 1 digits";
	}
	else if(x<100)
	{
		cout << "The number has 2 digits";
	}
	else if (x < 1000)
	{
		cout << "The number has 3 digits";
	}
	else if (x < 10000)
	{
		cout << "The number has 4 digits";
	}
	else if (x < 100000)
	{
		cout << "The number has 5 digits";
	}
	else if (x < 1000000)
	{
		cout << "The number has 6 digits";
	}
	else if (x < 10000000)
	{
		cout << "The number has 7 digits";
	}



	return 0;
}