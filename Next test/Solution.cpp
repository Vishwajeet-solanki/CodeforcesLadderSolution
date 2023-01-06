#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n+1]={0};
    for(int i=0;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a<=n)
        {
            A[a]=1;
        }
    }
    int s=n+1;
    for(int i=1;i<=n;i++)
    {
        if(A[i]!=1)
        {
            s=i;
            break;
        }
    }
    cout<<s;
    return 0;
}