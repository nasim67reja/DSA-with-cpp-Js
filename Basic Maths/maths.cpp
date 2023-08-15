#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    long r = 0;
    while (x)
    {
        r = (r * 10) + x % 10;
        x = x / 10;
    }
    if (r > INT_MAX || r < INT_MIN)
        return 0;
    return int(r);
}

bool isPalindrome(int x)
{
    if (x < 0)
        return false; // negative is not a palindrome
    int t = x;
    long r = 0;
    while (x)
    {
        r = (r * 10) + x % 10;
        x = x / 10;
    }
    if (r > INT_MAX || r < INT_MIN)
        return 0;
    return int(r) == t;
}

bool isArmstrong(int x)
{
    int t = x;
    int a = 0;
    while (x)
    {
        int ld = x % 10;
        a = a + (ld * ld * ld);
        x = x / 10;
    }

    return t == a;
}

void findDivisions(int x)
{
    vector<int> s;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            s.push_back(i);
            if (i != x / i) // if we use set then we don't need to do this
                s.push_back(x / i);
        }
    }

    sort(s.begin(), s.end()); // if we use set then we don't need to do this

    for (auto val : s)
        cout << val << " ";
}

bool PrimeNumber(int x)
{
    int count = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
            if ((x / i) != i)
                count++;
        }
    }

    return count <= 2;
}
int main()
{

    int n;
    cin >> n;

    cout << PrimeNumber(n);

    return 0;
}