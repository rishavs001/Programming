/*
 To print an array of elements, use a function template for arrays of
 i. integers,
 ii.doubles,
 iii.Strings, and
 iv. Complex numbers
 */

#include <bits/stdc++.h>
using namespace std;
template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    cout << "Int :\n";
    int int_a[4] = {1, 2, 3, 4};
    printArray<int>(int_a, 4);
    cout << "double :\n";
    double double_a[4] = {1.2, 1.3, 1.5, 1.6};
    printArray<double>(double_a, 4);
    cout << "string :\n";
    string s[4] = {"this", "is", "a", "name"};
    printArray<string>(s, 4);
    cout << "complex number : \n";
    complex<double> comlex_array[5] = {
        complex<double>(1.0, 2.0),
        complex<double>(4.0, 6.0),
        complex<double>(2.0, 7.0),
        complex<double>(7.0, 3.0),
        complex<double>(4.0, 1.0),
    };
    printArray<complex<double>>(comlex_array, 5);

    return 0;
}