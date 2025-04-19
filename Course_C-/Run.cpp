#include <iostream>
#include "ravesli.h"
#include <vector>
#include <string>
using namespace std;

class People
{
private:
	string name = "";
	int age = 0;
public:
	string get_name()
	{
		return name;
	}

	int get_age()
	{
		return age;
	}

	void set_name(string name)
	{
		if (name != "")
		{
			this->name = name;
		}
	}

	void set_age(int age)
	{
		if (age != 0)
		{
			this->age = age;
		}
	}
};

int main()
{
	People people;
	people.set_age(18);
	people.set_name("Nikol");
	cout << people.get_age() << " " << people.get_name() << endl;
}