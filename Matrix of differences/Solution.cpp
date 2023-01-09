#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin >> m;
 
        int l = 1;
        int r = m * m;
        vector<vector<int>> V(m, vector<int>(m));
        for (int i = 1; i <= m; i++)
        {
 
            for (int j = 1; j <= m; j++)
            {
                if ((i * m + j) % 2 == 0)
                {
                    V[i - 1][j - 1] = l++;
                }
                else
                    V[i - 1][j - 1] = r--;
            }
        }
 
        for (int i = 1; i <= m; i++)
        {
            if (i % 2 != 1)
            {
                for (int j = 1; j <= m; j++)
                {
                    cout << V[i - 1][j - 1] << " ";
                }
                cout << endl;
            }
            else
            {
                for (int j = m - 1; j >= 0; j--)
                {
                    cout << V[i - 1][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}