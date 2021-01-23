#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define dl double
#define lp for(ll i=0; i<n; i++)
#define lp2 for(ll j=0; j<m; j++)
#define lps for(ll i=0; i<len; i++)
 
 
int main()
{
    ll n,j=1;
    cin>>n;
    lp{
        ll a,b;
        cin>>a>>b;
        ll ans=19+abs(a-b)*4+a*4;
        cout<<"Case "<<j<<": "<<ans<<endl;
        j++;
    }
}
