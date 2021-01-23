#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz 10000007

bool prime[sz];
vector < ll > vt;

void sieve()
{
    for(ll i=2; i<=sz; i++)
    {
        if(prime[i])
            continue;
        for(ll j=i*i; j<=sz; j+=i)
            prime[j]=1;

        vt.push_back(i);
    }
}

ll fector(ll n)
{
    ll ans,coun=0;
    ll sq=sqrt(n);
    for(ll i=0; i<vt.size(); i++)
    {
        if(vt[i]>sq)
            break;
        if(n%vt[i]==0)
        {
            ans=vt[i];
            coun++;
        }
        while(n%vt[i]==0)
            n/=vt[i];
    }
    if(n>1)
    {
        ans=n;coun++;
    }
    if(coun<=1)
        return -1;
    return ans;
}


int main()
{
    sieve();
    while(1)
    {
        ll n;
        scanf("%lld",&n);
        if(n==0) break;
        if(n<0)
            n*=-1;
        printf("%lld\n",fector(n));
    }
}
