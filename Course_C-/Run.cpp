#include <iostream>
#include <ctime>
using namespace std;

extern "C" void sortArrayAsm(int array[], int sizeArray);

void randArray(int array[], int lenghtArray);
void sortArray(int array[], int lenghtArray);

int main(void)
{
	setlocale(LC_ALL, "Russian");

	const int MAX_SIZE_ARRAY = 100000;

	int array[MAX_SIZE_ARRAY] = {};
	int sizeArray = sizeof(array) / sizeof(*array);

	randArray(array, sizeArray);
	unsigned int start_time = clock(); // начальное время

	sortArrayAsm(array, sizeArray);

	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время
	cout << search_time << endl;
}

void randArray(int array[], int lenghtArray)
{
	srand(time(NULL));
	for (int i = 0; i < lenghtArray; i++)
	{
		 array[i] = rand() % lenghtArray;
	}
}

void sortArray(int array[], int lenghtArray)
{
	int a = 0;
	int b = 0;
	int x = 0;
	for (int i = 0; i < lenghtArray; i++)
	{
		a = array[i];
		for (int j = x; j < lenghtArray; j++)
		{
			if (array[j] <= array[i])
			{
				if (a >= array[j])
				{
					a = array[j];
					b = j;
				}
			}
		}
		array[b] = array[i];
		array[i] = a;
		x++;
	}
}