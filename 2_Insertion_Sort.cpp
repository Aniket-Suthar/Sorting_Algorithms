#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &array, int size)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        int temp = array[i];
        int j = i - 1;
        for (j = i - 1; j >= 0; j--)
        {
            if (array[j] > temp)
            {
                // SHIFTING TAKES PLACE
                array[j + 1] = array[j];
                count++;
                
                cout<<"\nTHe Comparison/Shifting : "<<array[j+1]<<"-->"<<temp<<"\n";
            }
            else
            {
                // NO CHANGE AND WAIT
                break;
            }
        }
        array[j + 1] = temp;
    }
    cout<<"\nTotal Comparison/Shifting takes place :"<<count<<"\n";
}
int main()
{
    int n;
    cout<<"ENter the size of array:\n";
    cin >> n;

    cout<<"ENter the elements of array: \n";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout<<"\nArray Before Sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<"\n";

    InsertionSort(v, n);

    cout<<"\nArray After Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}