#include <iostream>
#include <ctime>
using namespace std;

extern "C" void sortArrayAsm(int array[], int sizeArray);
extern "C" void bubbleSortAsm(int array[], int lenghtArray);

void bubbleSort(int array[], int lenghtArray);
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

	bubbleSortAsm(array, sizeArray);

	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время
	cout << search_time << endl;
	//for (int i = 0; i < sizeArray; i++)
	//{
	//	cout << array[i] << " ";
	//}
	//cout << endl;
}

// time 45.9 lenght array 100 000
void bubbleSort(int array[], int lenghtArray)
{
	while (lenghtArray--)
	{
		bool swapped = false;

		for (int i = 0; i < lenghtArray; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i], array[i + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
}

void randArray(int array[], int lenghtArray)
{
	srand(time(NULL));
	for (int i = 0; i < lenghtArray; i++)
	{
		array[i] = rand() % lenghtArray;
	}
}

// time 28.8 lenght array 100 000
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