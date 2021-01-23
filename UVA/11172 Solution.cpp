#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==m)
            cout<<"="<<endl;
        else if(n>m)
            cout<<">"<<endl;
        else
            cout<<"<"<<endl;

    }
}
