#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz 1000000

ll a[sz],x,y;
bool prime[sz];

void sieve()
{
    prime[0]=true,prime[1]=true;
    for(ll i=4; i<=sz; i+=2)
        prime[i]=true;
    for(ll i=3; i*i<=sz; i+=2)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i; j<sz; j=j+(2*i))
                prime[j]=true;
        }
    }
    a[2]=true;
    for(ll i=3; i<=sz; i++)
    {
        a[i]=a[i-1];
        if(prime[i]==false)
        {
            x=i,y=0;
            while(x)
            {
                y+=(x%10);
                x/=10;
            }
            if(prime[y]==false)
                a[i]++;
        }
    }
}

int main()
{
    sieve();
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        ll ans=a[y]-a[x-1];
        printf("%lld\n",ans);
    }
}
