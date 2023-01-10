#include <bits/stdc++.h>
using namespace std;

void sol()
{
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            string x = s.substr(0, i);
            string y = s.substr(i, j - i);
            string z = s.substr(j);
            if (x <= y && z <= y)
            {
                cout << x << " " << y << " " << z << endl;
                return;
            }
            else if (y <= x && y <= z)
            {
                cout << x << " " << y << " " << z << endl;
                return;
            }
        }
    }
    cout << ":(" << endl;
}
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        sol();
    }
}