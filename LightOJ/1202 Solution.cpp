#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        ll r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        ll r=abs(r1-r2);
        ll c=abs(c1-c2);
        if(r==c)
            cout<<"Case "<<cas<<": "<<1<<endl;
        else if((r-c)%2==0)
            cout<<"Case "<<cas<<": "<<2<<endl;
        else
            cout<<"Case "<<cas<<": "<<"impossible"<<endl;
        cas++;
    }
}
