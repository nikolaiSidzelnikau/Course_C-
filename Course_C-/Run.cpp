#include <iostream>
#include <string>
#include "codewars.h"
#include <vector>
using namespace std;

int main()
{
	unsigned int nFloors = 3;
	vector<string> pyramid;
	for (int i = 0; i < nFloors; i++)
	{
		int size_nFloors = nFloors * 2 - 1;
		int r = (size_nFloors / 2) - i;
		string text = "";

		for (int i = 0; i < size_nFloors; i++)
		{
			if (i<r || i>=(size_nFloors - r))
			{
				text += " ";
			}
			else
			{
				text += "*";
			}
		}
		pyramid.push_back(text);
	}

	for (int i = 0; i < nFloors; i++)
	{
		string s = pyramid[i];
		cout << s << endl;
	}
}