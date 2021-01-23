#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sz 10000100

vector< ll >vt;
bool prime[sz];

void sieve()
{
    vt.push_back(2);
    for(ll i=3; i<sz; i+=2)
    {
        if(prime[i]==0)
        {
            vt.push_back(i);
            for(ll j=i*i; j<sz; j+=(i+i))
                prime[j]=1;
        }
    }
}


ll Div(ll n)
{
    ll sq=sqrt(n),i;
    ll res=1;
    while(n%2==0)
        n/=2;
    for(ll i=1; vt[i]<=sq&&i<vt.size(); i++)
    {
        if(n%vt[i]==0)
        {
            ll coun=0;
            while(n%vt[i]==0)
            {
                coun++;
                n/=(ll)vt[i];
            }
            sq=sqrt(n);
            res*=(coun+1);
        }
    }
    if(i==vt.size())
        return 1;
    if(n>1)
        res*=2;
    return res-1;
}


int main()
{
    sieve();
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<3)
            printf("1\n");
        else
            printf("%lld\n",Div(n)+1);
    }
}
