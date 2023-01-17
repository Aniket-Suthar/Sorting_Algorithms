#include <bits/stdc++.h>
using namespace std;

int partition(int *array, int start, int end)
{
    int pivotElement = array[start];

    int count = 0;

    // counting the no of elements smaller than pivot element
    for (int i = start + 1; i <= end; i++)
    {
        if (array[i] <= pivotElement)
        {
            count++;
        }
    }

    int pivotIndex = start + count;

    // swapping the pivot element to its right place
    swap(array[pivotIndex], array[start]);

    // arranging the left and right subarray of pivot element to satisfy the condition
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (array[i] < pivotElement)
        {
            i++;
        }
        while (array[j] > pivotElement)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(array[i++], array[j--]);
        }
    }

    return pivotIndex;
}

void QuickSort(int *array, int start, int end)
{

    // base case
    if (start >= end)
    {
        return;
    }

    // performing partition
    int p = partition(array, start, end);

    // Sorting the left part from pivot index
    QuickSort(array, start, p - 1);

    // sorting the right part from pivot index
    QuickSort(array, p + 1, end);
}
int main()
{
    int n;
    cout << "Enter the size of array: \n";
    cin >> n;

    int arr[n];
    cout << "\nEnter the Elements of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray Before Sorting :\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nArray After Sorting :\n";

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
