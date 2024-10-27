#include <iostream>
#include <iomanip>
using namespace std;

//tasks 1 additions

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

//tasks 2 calculator : +, -, *, / 

void calculator()
{
	double result = 0.0;
	double a = 0.0;
	double b = 0.0;
	char c = 0;
	cout << "Enter the correct mathematical operation " << endl;
	cout << "example : 5.4 + 6 " << endl;
	cin >> a;
	cin >> c;
	cin >> b;
	cout << endl;
	if (a && b != 0 || 0.0)
	{
		if (c == '+')
		{
			result = a + b;
		}
		else if (c == '-')
		{
			result = a - b;
		}
		else if (c == '*')
		{
			result = a * b;
		}
		else if (c == '/')
		{
			result = a / b;
		}
		else
		{
			cout << "Enter the correct mathematical operation";
		}
	}
	else
	{
		cout << "Enter the correct number";
	}
	cout << setprecision(10) << endl;
	cout << a << " " << c << " " << b << " = " << result << endl;
}

//the falling of the ball

double setHeightTower() {
	double height = 0;
	cout << "Enter the initial height of the tower in meters: ";
	cin >> height;
	cout << endl;
	return height;
}

void getHeigtFallingBall()
{
	const double GRAVITY = 9.8;
	const double HEIGHT_TOWER = setHeightTower();

	double currentHeight = 0;
	int second = 0;
	while (currentHeight >= 0)
	{
		currentHeight = HEIGHT_TOWER - ((GRAVITY * second * second) / 2);
		if (currentHeight > 0)
		{
			cout << second << " second : " << currentHeight << endl;
			second++;
		}
	}
}

//data type in byte

void dataTypeInByte()
{
	bool b = true;
	char c = 'c';
	short s = 2;
	int i = 4;
	long l = 4;
	long long ll = 8;
	float f = 4.0;
	double d = 8.0;
	long double ld = 8.0;

	// 1 bytes 8 bit  range of values from  -128 to 127  unsigned from  0 to 255
	// 2 bytes 16 bit  range of values from  -32 768 to 32 767 unsigned from  0 to 65 535
	// 4 bytes 32 bit  range of values from  -2 147 483 648 to 2 147 483 647 unsigned from  0 to 4 294 967 295
	// 8 bytes 64 bit range of values from  -9 223 372 036 854 775 808 to 9 223 372 036 854 775 807 unsigned from  0 to 18 446 744 073 709 551 615

	cout << "bool\t\t =\t\t" << sizeof(b) << endl;
	cout << "char\t\t =\t\t" << sizeof(c) << endl;
	cout << "short\t\t =\t\t" << sizeof(s) << endl;
	cout << "int\t\t =\t\t" << sizeof(i) << endl;
	cout << "long\t\t =\t\t" << sizeof(l) << endl;
	cout << "long long\t =\t\t" << sizeof(ll) << endl;
	cout << "float\t\t =\t\t" << sizeof(f) << endl;
	cout << "double\t\t =\t\t" << sizeof(d) << endl;
	cout << "long double\t =\t\t" << sizeof(ld) << endl;
}