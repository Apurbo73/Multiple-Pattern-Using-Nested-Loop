#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // NUmbers:
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {

            cout << i + 1 << " ";
        }
        cout << endl;
    }
    // Sample Input: 5
    // Your Output
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5


    // Alphabets:
    char ch='A';
    for (int i = 0; i < n; i++)
    {


        for (int j = 0; j < i + 1; j++)
        {
             cout<<ch<<" ";
            // cout << i + 1 << " ";
            ch=ch+j;
        }
        cout << endl;
    }
}