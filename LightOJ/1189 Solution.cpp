#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll fact[25];
vector<ll> v;

int main()
{
    ll t,cas=1;
    fact[0]=1;
    for(ll i=1; i<=20; i++)
        fact[i]=i*fact[i-1];
    
    cin>>t;
    while(t--)
    {
        v.clear();
        ll n,m,sum=0;
        cin>>n;
        for(ll i=20; i>=0; i--)
        {
            if(fact[i]<=n)
            {
                v.push_back(i);
                n-=fact[i];
            }
        }
        if(v.empty() || n!=0)
            cout<<"Case "<<cas<<": impossible"<<endl;
        else
        {
            cout<<"Case "<<cas<<": ";
            for(ll i=v.size()-1; i>=0; i--)
            {
                cout<<v[i]<<"!";
                if(i!=0)
                    cout<<"+";
                else
                    cout<<endl;
            }
        }
        cas++;
    }
}
