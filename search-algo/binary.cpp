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

// Find pivet in an array

// int get_pivet(vector<int> &v)
// {

//     int s = 0, e = v.size() - 1, mid = s + (e - s) / 2;
//     while (e > s)
//     {
//         if (v[mid] > v[0])
//             s = mid + 1;
//         else
//             e = mid;
//         mid = s + (e - s) / 2;
//     }
//     return s; // e is also will be the answer
// }

//  find element in a sorted array

int search(vector<int> &nums, int target)
{

    // find pivet element
    int sp = 0, ep = nums.size() - 1, midp = sp + (ep - sp) / 2;

    while (ep > sp)
    {
        if (nums[midp] >= nums[0])
            sp = midp + 1;
        else
            ep = midp;
        midp = sp + (ep - sp) / 2;
    }
    int pivot = sp;

    // now find the actual element

    int s = 0, e = nums.size() - 1;

    if (target == nums[pivot])
        return pivot;

    if (nums[pivot] <= target && target <= nums[nums.size() - 1])
        s = pivot;
    else
        e = pivot - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

// sqrt(x)
int mySqrt(int x)
{
    int s = 0, e = x;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (e >= s)
    {
        long long int squre = mid * mid;
        if (squre == x)
            return mid;
        else if (squre > x)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v = {5, 1, 3};
    int n;
    cin >> n;
    cout << mySqrt(n) << endl;
    return 0;
}