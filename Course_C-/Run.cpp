#include <iostream>
using namespace std;

extern "C" int additions(int a, int b);

int main(void)
{
    int a = additions(4,5);
    cout << "Hello Word!" << endl;
    cout << "a + b = " << a << endl;
}