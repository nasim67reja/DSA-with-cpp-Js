#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5};
    auto pointer1 = lower_bound(v.begin(), v.end(), 7);
    cout << pointer1 - v.begin() << endl;
    return 0;
}

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