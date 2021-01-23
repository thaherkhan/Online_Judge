#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx 1000005
#define sz1 1009

bool prime[sz1];
vector <ll> vt;

void seive()
{
    memset(prime, true, sizeof(prime));
    for(ll i=4; i<sz1; i+=2)
        prime[i]=false;

    prime[0]=false;
    for(ll i=3; i*i<sz1; i+=2)
    {
        if(prime[i])
        {
            for(ll j=i*i; j<sz1; j+=(2*i))
                prime[j]=false;
        }
    }
    for(ll i=1; i<sz1; i++)
    {
        if(prime[i])
            vt.push_back(i);
    }
}


int main()
{
    seive();
    ll n,c;
    while(cin>>n>>c)
    {
        ll a[sz1];
        memset(a, 0, sizeof(a));
        cout<<n<<" "<<c<<":";
        ll coun=0;
        for(ll i=0; i<vt.size(); i++)
        {
            if(vt[i]<=n)
                a[coun++]=vt[i];
            else
                break;
        }
        if(coun&1)
            c=c*2-1;
        else
            c=c*2;

        if(c>coun)
            c=coun;

        ll k=coun/2-c/2;

        ll j=0;
        for(ll i=k; j<c; j++,i++)
        {
            cout<<" "<<a[i];
        }
        cout<<endl<<endl;
    }
    return 0;
}
