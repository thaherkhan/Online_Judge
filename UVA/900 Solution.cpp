#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    ll res=func(n-1)+func(n-2);
    return res;
}


int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        printf("%lld\n",func(n));
    }
}
