#include<bits/stdc++.h>
using namespace std;

#define ll long long
const double pi = 3.1415926535898;

int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        double r;
        ll n;
        cin>>r>>n;
        double d=sin(pi/n);
        double k=d*r/(d+1);
        printf("Case %lld: %.10lf\n",cas,k);
        cas++;
    }
}
