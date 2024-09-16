#include <bits/stdc++.h>
using namespace std;

int Sum(int **arr, int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main()
{
    int r, c;
    cout << "Enter the value of row and column: ";
    cin >> r >> c;
    int **arr = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = Sum(arr, r, c);
    cout << "Sum of all elements of array = " << sum << endl;
}