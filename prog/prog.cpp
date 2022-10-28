#include <iostream>
#include "Function.h"

#define SIZE 10
#define INTEGER
#define FLOAT
#define CHAR
#define MACROS
using namespace std;

int main()
{
#ifdef MACROS
    cout << "\tMACROS\n\n";
    cout << "Min = " << MIN_DIGIT(6, 2) << endl;
    cout << "Max = " << MAX_DIGIT(7, 4) << endl;
    cout << "SQUARE = " << SQUARE(2) << endl;
    cout << "Power = " << POW(2, 3);
    cout << endl << EVEN(6) ;
    cout << endl << ODD(3);
#endif 
    cout << endl << endl;
#ifdef INTEGER
    cout << "\tINTEGER\n\n";
    int arr[SIZE];
    FILL(arr, SIZE);
    OUTPUT(arr, SIZE);
    MIN(arr, SIZE);
    MAX(arr, SIZE);
    SORT_INT(arr, SIZE);
    OUTPUT(arr, SIZE);
    CHANGE_INT(arr, SIZE);
    OUTPUT(arr, SIZE);
#endif
    cout << endl << endl;
#ifdef FLOAT
    cout << "\tFLOAT\n\n";
    float arr1[SIZE];
    FLOAT_FILL(arr1, SIZE);
    FLOAT_OUTPUT(arr1, SIZE);
    FLOAT_MIN(arr1, SIZE);
    FLOAT_MAX(arr1, SIZE);
    FLOAT_SORT(arr1, SIZE);
    FLOAT_OUTPUT(arr1, SIZE);
    FLOAT_CHANGE(arr1, SIZE);
    FLOAT_OUTPUT(arr1, SIZE);
#endif
    cout << endl << endl;
#ifdef CHAR
    cout << "\tCHAR\n\n";
    char arr2[SIZE];
    CHAR_FILL(arr2, SIZE);
    CHAR_OUTPUT(arr2, SIZE);
    CHAR_MIN(arr2, SIZE);
    CHAR_MAX(arr2, SIZE);
    CHAR_SORT(arr2, SIZE);
    CHAR_OUTPUT(arr2, SIZE);
    CHAR_CHANGE(arr2, SIZE);
    CHAR_OUTPUT(arr2, SIZE);
#endif

}





