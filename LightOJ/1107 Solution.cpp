#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp for(ll i=0; i<n; i++)

int main()
{
    ll t,j=1;
    cin>>t;
    while(t--){
        ll x1,y1,x2,y2, n;
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        cout<<"Case "<<j<<":"<<endl;
        lp{
            ll a,b;
            cin>>a>>b;
            if(a>x1 && a<x2 && b>y1 && b<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        j++;
    }
}
