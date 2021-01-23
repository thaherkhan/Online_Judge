#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,d,r;
    while(1)
    {
        cin>>n>>d>>r;
        if(n==0)
            return 0;
        ll a[n+5],b[n+5];
        for(ll i=0; i<n; i++)
            cin>>a[i];

        for(ll i=0; i<n; i++)
            cin>>b[i];

        ll ans=0;
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        for(ll i=0; i<n; i++)
        {
            if(a[i]+b[i]>d)
                ans+=a[i]+b[i]-d;
        }
        cout<<ans*r<<endl;
    }
}
