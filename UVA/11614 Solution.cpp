#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll k;
        cin>>k;

        ll sq=sqrt((8*k)+1);
        ll ans=(sq-1)/2;

        cout<<ans<<endl;
    }
}
