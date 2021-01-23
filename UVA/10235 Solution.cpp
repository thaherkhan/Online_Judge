#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define size 1000005

ll a[1000005];

void sieve()
{
    for(ll i=4; i<size; i+=2)
        a[i]=1;
    for(ll i=3; i*i<size; i+=2){
        if(a[i]==0){
            for(ll j=i*i; j<size; j=j+(2*i))
                a[j]=1;
        }
    }
}

int main()
{
    ll n, lsd, rev=0, m;
    sieve();
    while(scanf("%lld",&n) != EOF)
    {

        if(a[n]==1)
            cout<<n<<" is not prime."<<endl;
        else{
            m=n;
            while(n!=0){
                lsd = n%10;
                rev = rev*10+lsd;
                n/=10;
            }
            if(a[rev]==0 && rev!=m)
                cout<<m<<" is emirp."<<endl;
            else
                cout<<m<<" is prime."<<endl;
            rev=0;
        }
    }
}
