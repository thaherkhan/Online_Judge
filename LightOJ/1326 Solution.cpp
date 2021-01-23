#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 100005
#define mod 10056

ll dp[1010][1010];
ll a[1010];

int main()
{
    ll n,t,k=1;
    dp[0][0]=1;
    for(ll i=1; i<=1001; i++)
    {
        for(ll j=1; j<=i; j++)
        {
            dp[i][j]=dp[i-1][j]*j + dp[i-1][j-1]*j;
            dp[i][j]%=mod;
            a[i]+=dp[i][j];
            a[i]%=mod;
        }
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",k,a[n]);
        k++;
    }
}
