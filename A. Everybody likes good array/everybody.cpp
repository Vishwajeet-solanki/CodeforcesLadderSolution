#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin>>m;
        vector<int>A(2);
        int c=0;
        for(int i=0;i<m;i++)
        {
            cin>>A[0];
            if(i!=0 && A[0]%2 == A[1]%2)
                c++;
            A[1]=A[0];
        }
        cout<< c <<endl;
    }
    return 0;
}
   