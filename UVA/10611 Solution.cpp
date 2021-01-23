#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n+5];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll k;
        cin>>k;
        ll low=lower_bound(a,a+n,k)-a-1;
        ll high=upper_bound(a,a+n,k)-a;
        if(low<0)
            cout<<"X ";
        else
            cout<<a[low]<<" ";

        if(high>=n)
            cout<<"X"<<endl;
        else
            cout<<a[high]<<endl;
    }
}
