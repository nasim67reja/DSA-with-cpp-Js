#include <iostream>
#include <vector>
using namespace std;

// selection sort
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
    for (int val : arr)
        cout << val << " ";
}

// Bubble sort
void bubbleSort(vector<int> &arr, int n)
{
    int temp;
    bool swapped = false; // checking best case
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap we can use this instead of swap function
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // swap(arr[j], arr[j + 1]);
                // best case
                swapped = true;
            }
            if (swapped == false)
                break;
        }
    }
    for (int val : arr)
        cout << val << " ";
}

//  insertion sort
// return sorted array
void insertionSort(vector<int> &arr, int size)

{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int val : arr)
        cout << val << " ";
}

int main()
{
    vector<int> v = {5, 2, 15, 4, 12, 3, 7};
    cout << "Selection sort "
         << " ";

    selectionSort(v, v.size());
    cout << endl;
    cout << "Bubble sort "
         << " ";
    bubbleSort(v, v.size());
    cout << endl;
    cout << "Insertion Sort"
         << " ";
    insertionSort(v, v.size());

    return 0;
}