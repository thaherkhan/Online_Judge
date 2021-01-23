#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

int main()
{
    ll n,k,t=1;
    while(cin>>n>>k)
    {
        if(n==0 && k==0) return 0;
        ll a[100005];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);

        cout<<"CASE# "<<t<<":"<<endl;
        t++;
        bool f;
        ll q;
        for(ll i=0; i<k; i++)
        {
            cin>>q;
            f=false;
            for(ll j=0; j<n; j++)
            {
                if(a[j]==q)
                {
                    cout<<q<<" found at "<<j+1<<endl;
                    f=true; break;
                }
                else if(a[j]>q)
                    break;
            }
            if(!f)
                cout<<q<<" not found"<<endl;
        }
    }
}
