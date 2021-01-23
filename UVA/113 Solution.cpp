#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    double k;
    ll n,r;
    while(cin>>n>>k)
    {
        double r=pow(k,1./n);
        printf("%.0lf\n",r);
    }
}
