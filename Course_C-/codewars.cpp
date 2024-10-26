#include <string>
using namespace std;

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