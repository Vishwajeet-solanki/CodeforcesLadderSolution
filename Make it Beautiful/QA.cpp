#include <bits/stdc++.h>
#define M 998244353
using namespace std;
 
void sool()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
 
    if (A[0] == A[n - 1])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            cout << A[l++] << " ";
            cout << A[r--] << " ";
        }
        if (n % 2 != 0)
            cout << A[l];
 
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sool();
    }
    return 0;
}