#include <iostream>
using namespace std;


int readNumber()
{
	int a = 0;
	int b = 0;
	cout << "Enter number" << endl;
	cin >> a;
	cout << "Enter number" << endl;
	cin >> b;
	return a + b;
}

void writeAnswer(int num)
{
	cout << "Result = ";
	cout << num << endl;
}