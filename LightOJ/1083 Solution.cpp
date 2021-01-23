#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,k=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll a[n+5],mx=0;
        for(ll i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(ll i=0; i<n; i++)
        {
            ll mn=a[i],coun=1;
            for(ll j=i+1; j<n; j++)
            {
                if(a[j]>=mn)
                    coun++;
                else
                    break;
            }
            for(ll j=i-1; j>=0; j--)
            {
                if(a[j]>=mn)
                    coun++;
                else
                    break;
            }
            mx=max(mx,(coun*mn));
        }
        printf("Case %lld: %lld\n",k,mx);
        k++;
    }
}
