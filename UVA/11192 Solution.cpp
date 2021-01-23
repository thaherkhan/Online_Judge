#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define lp for(ll i=0; i<n; i++)
#define lp2 for(ll j=0; j<m; j++)
#define lps for(ll i=0; i<len; i++)


int main()
{
    string st;
    ll n;
    while(1){
        cin>>n;
        if(n==0)
            break;
        else{
            cin>>st;
            ll x=0,y=0;
            ll k=st.size()/n;
            for(ll i=0; i<st.size(); i++){
                if((i+1)%k==0){
                    y=i;
                    for(ll j=y; j>=x; j--)
                        cout<<st[j];
                    x=y+1;
                }
            }
        }
        cout<<endl;
    }
}
