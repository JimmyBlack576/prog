#pragma once

#ifndef MACROS
#define MIN_DIGIT(A,B) ((A) < (B) ? (A) : (B))
#define MAX_DIGIT(A,B) ((A) > (B) ? (A) : (B))
#define SQUARE(A) ((A)*(A))
#define POW(A,B) pow((A), (B))
#define EVEN(A) ((A) % 2 == 0) ? 1 : 0
#define ODD(A) ((A) % 2 == 1) ? 1 : 0
#endif 


#ifndef INTEGER
#define FILL fill_arr
#define OUTPUT output_arr
#define MIN search_min_int
#define MAX search_max_int
#define SORT_INT sort_arr_int
#define CHANGE_INT change_arr_value
void fill_arr(int* arr, int SIZE);
void output_arr(int* arr, int SIZE);
void search_min_int(int* arr, int SIZE);
void search_max_int(int* arr, int SIZE);
void sort_arr_int(int* arr, int SIZE);
void change_arr_value(int* arr, int SIZE);
#endif 

#ifndef FLOAT
#define FLOAT_FILL fill_arr_float
#define FLOAT_OUTPUT output_arr_float
#define FLOAT_MIN search_min_float
#define FLOAT_MAX search_max_float
#define FLOAT_SORT sort_arr_float
#define FLOAT_CHANGE change_arr_value_float
void output_arr_float(float* arr1, int SIZE);
void fill_arr_float(float* arr1, int SIZE);
void search_min_float(float* arr1, int SIZE);
void search_max_float(float* arr1, int SIZE);
void sort_arr_float(float* arr1, int SIZE);
void change_arr_value_float(float* arr1, int SIZE);
#endif 

#ifndef CHAR
#define CHAR_FILL fill_arr_char
#define CHAR_OUTPUT output_arr_char
#define CHAR_MIN search_min_char
#define CHAR_MAX search_max_char
#define CHAR_SORT sort_arr_char
#define CHAR_CHANGE change_arr_value_char
void fill_arr_char(char* arr2, int SIZE);
void output_arr_char(char* arr2, int SIZE);
void search_min_char(char* arr2, int SIZE);
void search_max_char(char* arr2, int SIZE);
void sort_arr_char(char* arr2, int SIZE);
void change_arr_value_char(char* arr2, int SIZE);
#endif 












