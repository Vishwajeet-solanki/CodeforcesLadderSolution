#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=0;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i].second;
    // }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i].second>v[i+1].second)
        {
            flag=1;
        }
    }
    if(flag==0) cout<<"Poor Alex";
    else cout<<"Happy Alex";

    return 0;
}