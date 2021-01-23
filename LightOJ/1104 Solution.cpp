#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10056
#define dl double

const int mx=1e4+9;

ll func(ll n)
{
    if(n<=2)
        return 2;
    dl res=1,i;
    for(i=0; i<n; i++)
    {
        res=(res*((n-i)/n));
        if(res<0.5)
        {
            i++;
            break;
        }
    }
    return i;
}

int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        dl n;
        cin>>n;
        cout<<"Case "<<cas<<": "<<func(n)-1<<endl;
        cas++;
    }
}
