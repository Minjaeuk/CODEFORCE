#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    vector<int> arr;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] - '0' >= 1)
        {
            arr.push_back(s[i] - '0');
        }
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i != arr.size() - 1)
        {
            cout << "+";
        }
    }
}
