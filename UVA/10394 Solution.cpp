#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 20000005

bool prime[mx];
ll a[mx];

void sieve()
{
    memset(prime, true, sizeof(prime));
    for(ll i=2; i*i<=mx; i++)
    {
        if(prime[i]==true)
        {
            for(ll j=i*2; j<=mx; j+=i)
                prime[j]=false;
        }
    }
    ll c=1;
    for(ll i=3; i<=mx; i++)
    {
        if(prime[i] && prime[i+2])
            a[c++]=i;
    }
}

int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        cout<<"("<<a[n]<<", "<<a[n]+2<<")"<<endl;
    }
}
