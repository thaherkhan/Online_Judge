#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[10000];

int main()
{
    ll n, m,f,c=0;
    while(cin>>n>>m)
    {
        c=0;
        for(ll i=1; i<=n; i++)
        {
            f=0;
            for(ll j=1; j<=m; j++)
            {
                cin>>a[j];
                if(a[j]==0)
                {
                    f=1;
                }
            }
            if(f==0)
                c++;
        }
        if(f==1)
            cout<<c<<endl;
        else
            cout<<c<<endl;
    }
}
