#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int s = 0;
    int c = 0;
    int count = 0;

    cin >> n;
    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        s = s + x[i];
    }
    sort(x.rbegin(), x.rend());

    for (int i = 0; i < n; i++)
    {
        if (s / 2 >= c)
        {
            c = c + x[i];
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
}