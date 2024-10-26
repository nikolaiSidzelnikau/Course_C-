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