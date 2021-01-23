#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define lp for(ll i=0; i<n; i++)
#define lp2 for(ll j=0; j<m; j++)
#define lps for(ll i=0; i<len; i++)


int main()
{
    ll t,k=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n+5];
        lp
            cin>>a[i];

        ll mx=a[0],y;
        lp{
            if(a[i]>mx)
                mx=a[i];
            y=i;
        }
        cout<<"Case "<<k<<": "<<mx<<endl;
        k++;
    }
}
