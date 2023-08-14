#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// for all character
int char_hash(string str, char c)
{
    int hash[256] = {0};
    for (int i = 0; i < str.size(); i++)
        hash[str[i]]++;
    return hash[c];
}

// for upper case character
int char_hash_lowerCase(string str, char c)
{
    int hash[26] = {0};
    for (int i = 0; i < str.size(); i++)
        hash[str[i] - 'a']++;
    return hash[c - 'a'];
}

// For Number
int num_hash(int arr[], int n, int key)
{
    int hash[100005] = {0}; // see this logic we can not go more than 1e8

    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
    return hash[key];
}

// if we want to go for more mean if the highest number is go above 1e8 than we need to use c++ stl (map, unordered_map)

// Count frequency

int frequency_counter(int arr[], int size, int key)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < size; i++)
        umap[arr[i]] = umap[arr[i]] + 1;

    for (auto val : umap)
    {

        // cout << val.first << " " << val.second << endl;
        if (val.first == key)
            cout << key << " appears " << val.second << " times." << endl;
    }
    return 1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    frequency_counter(arr, n, key);
    // 👉 number hashing
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    // int key;
    // cin >> key;
    // cout << key << " is appeared " << num_hash(arr, n, key) << " times.";

    // 👉 char hashing
    // string str;
    // cout << "Give any String ";
    // cin >> str;

    // int n;
    // cin >> n;
    // while (n--)
    // {
    //     char c;
    //     cin >> c;
    //     cout << endl;
    //     cout << c << " is appeared " << char_hash_lowerCase(str, c) << " time.";
    // }

    // cout << "Give the Character ";
    // char c;
    // cin >> c;
    // cout << c << " is appeared " << char_hash(str, c) << " time." << endl;

    return 0;
}