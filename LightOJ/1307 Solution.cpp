#include<bits/stdc++.h>
using namespace std;

#define ll long long
double const g=9.8;

vector <ll> v;
map <string,ll> mp;
string st[200];

ll func(ll n, ll a, ll b)
{
    return (n*b-n*n*a);
}


int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        ll c=0;
        for(ll i=0; i<n-2; i++)
        {
            ll k=i+1;
            for(ll j=i+1; j<n-1; j++)
            {
                while(a[i]+a[j]>a[k]&&k<n)
                {
                    k++;
                    if(k>j)
                        c+=k-j-1;
                }
            }
        }
        cout<<"Case "<<cas<<": "<<c<<endl;
        cas++;
    }
}
