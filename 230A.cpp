#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int s, n;
    vector<pair<int, int>> x;
    vector<int> y;

    cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(make_pair(a, b));
    }
    sort(x.begin(), x.end());

    for (int i = 0; i < n; i++)
    {
        if (s > x[i].first)
        {
            s += x[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}