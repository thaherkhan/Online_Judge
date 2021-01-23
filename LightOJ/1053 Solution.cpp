#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp for(ll i=0; i<n; i++)

int main()
{
    ll n;
    cin>>n;
    ll x,y,z,j=1;
    lp{
        cin>>x>>y>>z;
        if(max(x,max(y,z))==z){
            if((x*x)+(y*y)==(z*z))
                cout<<"Case "<<j<<": yes"<<endl;
            else
                cout<<"Case "<<j<<": no"<<endl;
        }
        else if(max(x,max(y,z))==y){
            if((x*x)+(z*z)==(y*y))
                cout<<"Case "<<j<<": yes"<<endl;
            else
                cout<<"Case "<<j<<": no"<<endl;
        }
        else if(max(x,max(y,z))==x){
            if((z*z)+(y*y)==(x*x))
                cout<<"Case "<<j<<": yes"<<endl;
            else
                cout<<"Case "<<j<<": no"<<endl;
        }
        j++;
    }
}
