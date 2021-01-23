#include<bits/stdc++.h>
using namespace std;

#define ll long long
double const g=9.8;

vector <string> v;
map <string,ll> mp;
string st[200];

ll func(ll n, ll a, ll b)
{
    return (n*b-n*n*a);
}

int main()
{
    ll t,cas=1;
    scanf("%lld", &t);
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        if(!n || !c)
            cout<<"Case "<<cas<<": 0"<<endl;
        else
        {
            ll a=c/(2*n);
            ll b=a+1;
            cout<<"Case "<<cas<<": ";
            ll x=func(a,n,c);
            ll y=func(b,n,c);
            if(x>=y)
                cout<<a<<endl;
            else
                cout<<b<<endl;
        }
        cas++;
    }

}
