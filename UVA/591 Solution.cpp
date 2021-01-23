#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, j=1;
    while(cin>>n){
        if(n==0)
            break;
        ll a[n+5],sum=0;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll r=sum/n,ans=0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]>r)
                ans+=a[i]-r;
        }
        cout<<"Set #"<<j<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl<<endl;
        j++;
    }
}
