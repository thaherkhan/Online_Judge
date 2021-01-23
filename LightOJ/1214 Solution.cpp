#include<bits/stdc++.h>
using namespace std;

#define ll long long
double const g=9.8;

vector <string> v;
map <string,ll> mp;
string st[200];

ll func(ll n, ll a, ll b)
{
    return (n*b-n*n*a);
}

int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        string st;
        ll b;
        cin>>st>>b;
        //b=abs(b);
        ll sum=0,k=1,res=0;
        for(ll i=0; i<st.size(); i++)
        {
            if(st[i]=='-')
                continue;
            sum=(sum*10)+(st[i]-'0');
            sum%=b;
        }
        if(sum==0)
            cout<<"Case "<<cas<<": divisible"<<endl;
        else
            cout<<"Case "<<cas<<": not divisible"<<endl;
        cas++;
    }
}
