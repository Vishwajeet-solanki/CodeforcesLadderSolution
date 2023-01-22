#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m=1e9+7;
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long result = 1;
        for (int i = 1; i <= n; i++)
        {
            result = (result * i) % m;
        }
        cout<< ((n*(n-1))%m * result)%m <<endl;
    }
    return 0;
}
     
 