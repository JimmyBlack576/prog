#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "function.h"

using namespace std;

void fill_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 9+1;
	}
}