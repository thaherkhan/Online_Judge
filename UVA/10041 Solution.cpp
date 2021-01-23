#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10056
#define dl double

const int mx=1e4+9;
char st1[1000009];
char st2[1000009];


int main()
{
    ll t,cas=1;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,sum=0;
        scanf("%lld",&n);
        ll a[n+5];
        for(ll i=0; i<n; i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        for(ll i=0; i<n; i++)
        {
            sum+=abs(a[i]-a[n/2]);
            //printf("%lld\n",sum);
        }
        printf("%lld\n",sum);
    }
}
