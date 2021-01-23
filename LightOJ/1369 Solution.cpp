#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector <string> v;
map <string,ll> mp;
string st[200];

ll func(ll a[], ll n)
{
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        sum+=(n-1-2*i)*a[i];
        //for(ll j=i+1; j<n; j++)
            //sum+=a[i]-a[j];
    }
    return sum;
}

int main()
{
    ll t,cas=1;
    scanf("%lld", &t);
    while(t--)
    {
        ll n,q,sum=0;
        scanf("%lld%lld", &n,&q);
        ll a[n+5];
        for(ll i=0; i<n; i++)
        {
            scanf("%lld", &a[i]);
            sum+=(n-1-2*i)*a[i];
        }
        printf("Case %lld:\n",cas);
        while(q--)
        {
            ll k,res;
            scanf("%lld", &k);
            if(k==1)
            {
                printf("%lld\n", sum);
            }
            else if(k==0)
            {
                ll x,v;
                scanf("%lld%lld", &x,&v);
                if(x>=n)
                    continue;
                sum+=(n-1-2*x)*(v-a[x]);
                a[x]=v;
            }
        }
        cas++;
    }

}
