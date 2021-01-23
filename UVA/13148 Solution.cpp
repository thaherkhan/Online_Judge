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
    ll n;
    while(scanf("%lld",&n))
    {
        if(n==0)
            return 0;
        ll sq=sqrt(n);
        ll q=cbrt(n);
        if((sq*sq)<n)
            sq++;
        if((q*q*q)<n)
            q++;

        if(sq*sq==n && q*q*q==n)
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;

    }

}
