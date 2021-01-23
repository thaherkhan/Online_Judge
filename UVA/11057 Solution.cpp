#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[100000];

int main()
{
    ll n,d1,d2;
    while(cin>>n)
    {
        ll mx=0,mn=0;
        d2=100000000;
        for(ll i=0; i<n; i++)
            cin>>a[i];
        ll q;
        cin>>q;
        for(ll i=0; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                if(a[i]+a[j]==q)
                {
                    d1=abs(a[i]-a[j]);
                    if(d1<d2)
                    {
                        d2=d1;
                        mx=max(a[i],a[j]);
                        mn=min(a[i],a[j]);
                    }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<mn<<" and "<<mx<<"."<<endl<<endl;
    }
}
