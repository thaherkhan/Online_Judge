#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz 1000000
#define sz1 50000

vector <ll> vt,v;
vector <ll> res;

ll prime[sz];
ll a[sz],p[500];

void sieve()
{
    //memset(prime, true, sizeof(true));
    prime[0]=prime[1]=1;
	for(ll i=2; i<sz; i++)
	{
		if(!prime[i])
		{
		    vt.push_back(i);
			for(ll j=i+i; j<sz; j+=i)
					prime[j]=1;
		}
	}
}


ll factorization(ll n)
{
    ll sq=sqrt(n);
    ll l=0;
	for(ll i=0; a[i]<=sq; i++)
	{
	    while(n%a[i]==0)
        {
            p[l++]=a[i];
            n/=a[i];
        }
	}
	if(n>1)
        p[l++]=n;
}

int main()
{
	sieve();
	ll n,flag;
	while(scanf("%lld",&n))
    {
        flag=0;
        v.clear();
        ll m=n;
        if(n==0)
            return 0;
        if(n<0)
        {
            flag=1;
            n=n*(-1);
        }
        for(ll i=0; i<vt.size()&&(vt[i]<=n); i++)
        {
            ll k=vt[i];
            while(n%k==0)
            {
                v.push_back(k);
                n/=k;
            }
        }
        if(n>1)
            v.push_back(n);

        printf("%lld =",m);
        if(flag)
            printf(" -1 x");
        for(ll i=0; i<v.size(); i++)
        {
            printf(" %lld",v[i]);
            if(i<v.size()-1)
                printf(" x");
        }
        printf("\n");
    }
}
