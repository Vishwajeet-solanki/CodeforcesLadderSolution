#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> s(m);
        for (int i = 0; i < m; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        int n = 0;
        int i = 0;
        int ans = 0;
        while (i < m)
        {
            int flag = 0;
            while (i < m && s[i] <= i)
            {
                flag = 1;
                i++;
            }

            if (flag || i == 0)
                ans++;

            while (i < m && s[i] > i)
            {
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
  