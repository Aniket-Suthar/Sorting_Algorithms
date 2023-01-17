#include <bits/stdc++.h>
using namespace std;

void merge(int *array, int start, int end)
{
    int mid = (start + end) / 2;

    // length of two sorted arrays
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // creating two sorted arrays to merge them
    int *first = new int[len1];
    int *second = new int[len2];

    // copying the values from main sorted array to this 2 arrays
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = array[mainArrayIndex++];
    }

    // copying values to second array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = array[mainArrayIndex++];
    }


    // merging 2 sorted array created above
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            array[mainArrayIndex++] = first[index1++];
        }

        else
        {
            array[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        array[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        array[mainArrayIndex++] = second[index2++];
    }
}


void MergeSort(int *array, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;

    // sorting left part
    MergeSort(array, start, mid);

    // sorting right part
    MergeSort(array, mid + 1, end);

    // merging 2 sorted arrays;
    merge(array, start, end);
}

int main()
{
    int n;
    cout << "Enter the size of Array :\n";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements of Array : \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    cout << "\nArray Before Sorting :\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nArray After Sorting : \n";

    MergeSort(arr, 0, n-1);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}