#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10056

const int mx=1e4+9;

ll n,m,a[mx];

bool bl(ll md)
{
    ll s=0,k=1;
    for(ll i=1; i<=n; i++)
    {
        if(s+a[i]>md)
        {
            s=a[i];
            k++;
        }
        else
            s+=a[i];
    }
    if(k<=m)
        return true;
    else
        return false;
}

int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll ans=0,mn=-10e10+9,tt=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            mn=max(mn,a[i]);
            tt+=a[i];
        }
        while(mn<=tt)
        {
            ll md=(tt+mn)/2;
            if(bl(md))
            {
                tt=md-1;
                ans=md;
            }
            else
                mn=md+1;
        }
        cout<<"Case "<<cas<<": "<<ans<<endl;
        cas++;
    }
}
