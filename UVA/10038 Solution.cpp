#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    while(cin>>n)
    {
        ll a[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll b[n+5];
        for(ll i=0; i<n; i++)
        {
            b[i]=0;
        }
        ll f=0,temp=0;
        for(ll i=1; i<n; i++)
        {
            temp=abs(a[i]-a[i-1]);
            //printf("%lld ",&temp);
            if(temp>0&&temp<n)
                b[temp]=1;
            else
                f=1;
        }
        for(ll i=1; i<n; i++)
        {
            if(b[i]==0)
                f=1;
        }
        if(f==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
}
