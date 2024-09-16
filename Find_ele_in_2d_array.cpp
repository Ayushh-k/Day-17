#include <bits/stdc++.h>
using namespace std;

bool search(int **arr, int r, int c, int t) // usie it if array is sorted otherwise firstly sort the array
{
    int s = 0;
    int e = r * c - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid / c][mid % c] == t)
        {
            return true;
        }
        else if (arr[mid / c][mid % c] < t)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return false;
}

bool search1(int **arr, int r, int c, int t)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == t)
            {
                return true;
            }
        }
    }
    return false;
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

    int target;
    cout << "Enter the value you want to search: ";
    cin >> target;

    if (search1(arr, r, c, target))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}