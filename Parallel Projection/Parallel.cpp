#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w,d,h;
        cin>>w>>d>>h;
        int a,b,f,g;
        cin>>a>>b>>f>>g;
        int A,B,C;
        A=min(b+g,d+d-b-g);
        B=min(a+f,w+w-a-f);
        C=min(abs(a-f)+A,abs(b-g)+B);
        cout<<C+h<<endl;
    }
    return 0;
}