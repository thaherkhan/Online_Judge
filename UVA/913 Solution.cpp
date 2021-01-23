#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define lp for(ll i=0; i<n; i++)
#define lp2 for(ll j=0; j<m; j++)
#define lps for(ll i=0; i<len; i++)


int main()
{
    ll n;
    while(scanf("%lld",&n)==1)
    {
        ll odd=(n*(n+2))/2;
        ll sum=3*odd-6;
        printf("%lld\n",sum);
    }
}
