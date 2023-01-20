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
     
        // string s;
        // cin>>s;
        // int n=s.size();
        // unordered_map<char,int>m;
        // for(int i=0;i<n;i++)
        // {
        //     m['s[i]']++;
        // }
        // vector<int>v;
        // for(auto i:m)
        // {
        //     v.push_back(i.second);
        // }
        // sort(v.begin(),v.end());
        // vector<int>a;
        // for(int i=1;i<sqrt(n))

        //int n,k=0;
        // cin>>n;
        // vector<int>v(n);
        // for(int i=0;i<n;i++)
        // {
        //     cin>>v[i];
        //     if(v[i]==0) k=1;
        // }
        // sort(v.begin(),v.end());
        // int i=-1,f=0,c=0;
        // while(i<n)
        // {
        //     while(f==0)
        //     {
        //         i++;
        //         if(v[i]==i)
        //         {
        //             f=1;
        //             c++;
        //         }
        //     }
        //     while(f==1)
        //     {
        //         i++;
        //         if(v[i]>i)
        //         {
        //             f=0;
        //         }
        //     } 
        // }
        // if(k==0) cout<<c+1<<endl;
        // else cout<<c<<endl;