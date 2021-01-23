#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx 9999998

bool check[mx];
vector < ll > prime;

void sieve()
{
    memset(check, true, sizeof(check));
    prime.push_back(2);
    for(ll i=3; i*i<=mx; i+=2)
    {
        if(check[i]==true)
        {
            for(ll j=i*i; j<=mx; j+=2*i)
                check[j]=false;
        }
    }
    for(ll k=3; k<=mx; k+=2)
    {
        if(check[k]==true)
            prime.push_back(k);
    }
}


int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        if(n<0)
            break;

        for(ll i=0; prime[i]*prime[i]<=n; i++)
        {
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    cout<<"    "<<prime[i]<<endl;
                    n/=prime[i];
                }
            }
        }
        if(n>1)
            cout<<"    "<<n<<endl;
        cout<<endl;
    }
}
