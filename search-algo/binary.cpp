#include <iostream>
#include <vector>
using namespace std;

// Binary search ( Love Babbar's way )

int binary_search(int arr[], int size, int key)
{

    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
            return mid;
        // go to the right part
        else if (key > arr[mid])
            s = mid + 1;
        // go to the left part
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

//  Finding the left occurance from an element (Love Babbar's way)

int leftOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2, ans = -1;

    while (e >= s)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
            s = mid + 1;
        else if (key < arr[mid])
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

//  Finding the right most occurance

int rightOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2, ans = -1;

    while (e >= s)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
            s = mid + 1;
        else if (key < arr[mid])
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

//
int peak(vector<int> &v)
{
    int s = 0, e = v.size() - 1, mid = s + (e - s) / 2;
    while (e > s)
    {
        if (v[mid] < v[mid + 1])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }

    return s;
}

int main()
{
    vector<int> v = {2, 3, 4, 5};
    int arr[6] = {2, 3, 3, 4, 4, 5};
    cout << leftOcc(arr, 6, 4) << endl;
    cout << rightOcc(arr, 6, 4);
    return 0;
}