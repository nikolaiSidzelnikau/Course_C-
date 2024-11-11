#include <iostream>
#include <string>
#include "codewars.h"
#include <vector>
using namespace std;

char findMissingLetter(vector<char>& chars);

int main()
{
	vector<char> aZ = { 'a', 'b', 'c', 'd', 'f' };
	vector<char> az = { 'O', 'Q', 'R', 'S' };
	cout << findMissingLetter(aZ) << endl;
}