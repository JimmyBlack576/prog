#include <stdlib.h>
#include <iostream>
#include "Function.h"

#define forsize for(int i = 0; i < SIZE; i++) 
using namespace std;

void fill_arr(int* arr,int SIZE)
{
	forsize
	{
		arr[i] = rand() % 9 + 1;
	}
}

void output_arr(int* arr, int SIZE) {
	forsize {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void search_min_int(int* arr, int SIZE) {
	int min = arr[0];
	forsize{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "Min = " << min << endl;
}

void search_max_int(int* arr, int SIZE) {
	int max = arr[0];
	forsize{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Max = " << max << endl;
}

void sort_arr_int(int* arr, int SIZE) {
	int temp;
	forsize{
		for (int j = 0; j < SIZE; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
}

void change_arr_value(int* arr, int SIZE) {
	int value, arr_num;
	cout << "Enter the number, of the cell whose value you want to change (1-10): \n";
	cin >> arr_num;
	cout << "Enter new value: \n";
	cin >> value;
	arr[arr_num-1] = value;
	
}

void fill_arr_float(float* arr1, int SIZE)
{
	forsize
	{
		arr1[i] = rand() % 99 * 0.24;
	}
}

void output_arr_float(float* arr1, int SIZE) {
	forsize{
		cout << arr1[i] << " ";
	}
	cout << endl;
}

void search_min_float(float* arr1, int SIZE) {
	float min = arr1[0];
	forsize{
		if (arr1[i] < min) {
			min = arr1[i];
		}
	}
	cout << "Min = " << min << endl;
}

void search_max_float(float* arr1, int SIZE) {
	float max = arr1[0];
	forsize{
		if (arr1[i] > max) {
			max = arr1[i];
		}
	}
	cout << "Max = " << max << endl;
}

void sort_arr_float(float* arr1, int SIZE) {
	float temp;
	forsize{
		for (int j = 0; j < SIZE; j++) {
			if (arr1[i] < arr1[j]) {
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}

	}
}

void change_arr_value_float(float* arr1, int SIZE) {
	int value, arr_num;
	cout << "Enter the number, of the cell whose value you want to change (1-10): \n";
	cin >> arr_num;
	cout << "Enter new value: \n";
	cin >> value;
	arr1[arr_num - 1] = value;
}

void fill_arr_char(char* arr2, int SIZE)
{
	forsize
	{
		arr2[i] = (char)97 + rand() % (122 - 97);
	}
}

void output_arr_char(char* arr2, int SIZE) {
	forsize{
		cout << arr2[i] << " ";
	}
	cout << endl;
}

void search_min_char(char* arr2, int SIZE) {
	char min = arr2[0];
	forsize{
		if (arr2[i] < min) {
			min = arr2[i];
		}
	}
	cout << "Min = " << min << endl;
}

void search_max_char(char* arr2, int SIZE) {
	char max = arr2[0];
	forsize{
		if (arr2[i] > max) {
			max = arr2[i];
		}
	}
	cout << "Max = " << max << endl;
}

void sort_arr_char(char* arr2, int SIZE) {
	char temp;
	forsize{
		for (int j = 0; j < SIZE; j++) {
			if (arr2[i] < arr2[j]) {
				temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}
		}

	}
}

void change_arr_value_char(char* arr2, int SIZE) {
	char value, arr_num;
	cout << "Enter the number, of the cell whose value you want to change (1-10): \n";
	cin >> arr_num;
	cout << "Enter new value: \n";
	cin >> value;
	arr2[arr_num - 1] = value;
}