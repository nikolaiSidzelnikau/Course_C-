#include <iostream>
#include <iomanip>
#include <math.h>
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

// bits

void bits()
{
	// <<  >>

	cout << " <<  >> " << endl;
	int a = 2;
	a = a << 4; // a == 32 = 2*2*2*2 
	cout << a << endl;
	a = a >> 4; // a == 2 = (((32 /2) /2) /2) /2 
	cout << a << endl << endl;

	// ~

	cout << " ~ " << endl;
	int b = 4;	// b ==			0000 0100
	b = ~b;		// b == -5 ==	1111 1011 
	b = b + 1;	// b == -4 ==	1111 1100
	cout << b << endl; // -4

	b = 567;	// b ==			0000 0010 0011 0111
	b = ~b;		// b ==	-568	1111 1101 1100 1000
	b += 1;		// b == -567	1111 1101 1100 1001
	cout << b << endl; // -567

	int c = -47; // c ==		1101 0001
	c = ~c;		// c == 46		0010 1110
	c += 1;		// c == 47		0010 1111
	cout << c << endl << endl; // 47

	// |
	// | == 0 + 1 = 1

	cout << " | " << endl;
	int d = 34;	// d ==			0010 0010
	int e = 4;  // e ==			0000 0100
	d = d | e; // d = 38		0010 0110
	cout << d << endl << endl;

	// &
	// & == 0 * 1 = 0

	cout << " & " << endl;
	int f = 18; // f ==			0001 0010
	int s = 7;  // s ==			0000 0111
	f = f & s;  // f =	2		0000 0010
	cout << f << endl;

	// ^

	cout << " & " << endl;
	int ab = 6; // ab ==			0000 0110
	int bc = 3; // bc ==			0000 0011
	ab = ab ^ bc; // ab = 5			0000 0101
	cout << ab << endl;
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