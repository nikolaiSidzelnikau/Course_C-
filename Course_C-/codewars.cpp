#include <string>
#include <vector>
using namespace std;

char findMissingLetter(vector<char>& chars)
{
	// 97 - 122 a-z
	// 65 - 90 A-Z
	char c = 0;
	for (int i = 0; i < chars.size(); i++)
	{
		if (i < chars.size() - 1)
		{
			if (chars[i + 1] - chars[i] == 2)
			{
				c = chars[i] + 1;
			}
		}
	}
	return c;
}

int digital_root(int n)
{
	while (n > 9)
	{
		n = n / 10 + n % 10;
	}
	return n;
}

int stringToNumber(const string& s)
{
	return stoi(s);
}

int opposite(int number)
{
	if (number < 0)
	{
		number = ~number + 1;
	}
	else
	{
		number = ~number + 1;
	}
	return number;
}

string numberToString(int num)
{
	return to_string(num);
}

string updateLight(string current)
{
	if (current == "green")
	{
		return "yellow";
	}
	else if (current == "yellow")
	{
		return "red";
	}
	else
	{
		return "green";
	}
}

string reverseString(string str)
{
	int sizeArray = (int)str.length();
	char symbol = 0;
	for (int i = 0; i < str.length() / 2; i++)
	{
		symbol = str[i];
		str[i] = str[sizeArray - i - 1];
		str[sizeArray - i - 1] = symbol;
	}
	return str;
}

string evenOrOdd(int number)
{

	return number % 2 == 0 ? "Even" : "Odd";
}

string repeatStr(size_t repeat, const string& str) {
	string s;
	while (repeat > 0)
	{
		s += str;
		repeat--;
	}
	return s;
}