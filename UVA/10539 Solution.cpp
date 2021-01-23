#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz 10000005

ll a[sz],c=0;
bool prime[sz];

void sieve()
{
    memset(prime, true, sizeof(prime));
    for(ll i=2; i<=sz; i++)
    {
        if(prime[i]==true)
        {
            a[c++]=i;
            for(ll j=i+i; j<=sz; j+=i)
            {
                prime[j]=false;
            }
        }
    }

}

int main()
{
    sieve();
    ll t,n,m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        ll coun=0;
        for(ll i=0; a[i]*a[i]<=m; i++)
        {
            ll k=a[i]*a[i];
            while(k<=m)
            {
                if(k>=n)
                    coun++;
                k*=a[i];
            }
        }
        printf("%lld\n",coun);
    }

}
