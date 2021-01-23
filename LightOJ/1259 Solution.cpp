#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz 10000005

ll a[1000005],c=0;
bool prime[sz];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0]=false,prime[1]=false;
    for(ll i=2; i<=sz; i++)
    {
        if(prime[i]==true)
        {
            a[c++]=i;
            for(ll j=i*i; j<=sz; j+=i)
                prime[j]=false;
        }
    }
}

int main()
{
    sieve();
    ll t,k=1;
    scanf("%lld",&t);
    while(t--)
    {
        ll coun=0,n;
        scanf("%lld",&n);
        for(ll i=0; a[i]<=n/2; i++)
        {
            if(prime[n-a[i]]==true)
                coun++;
        }
        printf("Case %lld: %lld\n",k,coun);
        k++;
    }
}
