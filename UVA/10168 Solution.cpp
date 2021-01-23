#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx 10000000

bool prime[mx];
ll a[mx],coun=1;

void sieve()
{
    memset(prime, true, sizeof(prime));
    for(ll i=2; i<=mx; i++)
    {
        if(prime[i])
        {
            a[coun++]=i;
        }
        for(ll j=1; j<=coun; j++)
        {
            if(i*a[j]>mx) break;
            prime[i*a[j]]=false;
            if(i%a[j]==0) break;
        }
    }
}


int main()
{
    sieve();
    ll n;
    while(scanf("%lld",&n)>0)
    {
        if(n==8)
        {
            printf("2 2 2 2\n");
            //cout<<2<<' '<<2<<' '<<2<<' '<<2<<endl;
            continue;
        }
        if(n==9)
        {
            printf("2 2 2 3\n");
            //cout<<2<<' '<<2<<' '<<2<<" "<<3<<endl;
            continue;
        }
        if(n==10)
        {
            printf("2 2 3 3\n");
            //cout<<2<<" "<<2<<" "<<3<<" "<<3<<endl;
            continue;
        }
        if(n==11)
        {
            printf("2 3 3 3\n");
            //cout<<2<<" "<<3<<" "<<3<<" "<<3<<endl;
            continue;
        }
        if(n==12)
        {
            printf("3 3 3 3\n");
            //cout<<3<<" "<<3<<" "<<3<<" "<<3<<endl;
            continue;
        }
        if(n<8)
        {
            printf("Impossible.\n");
            //cout<<"Impossible"<<endl;
            continue;
        }
        if(n%2==0)
        {
            printf("2 2 ");
            //cout<<2<<" "<<2<<" ";
            n=n-4;
        }
        else
        {
            printf("2 3 ");
            //cout<<2<<' '<<3<<' ';
            n=n-5;
        }
        for(ll i=1; i<coun; i++)
        {
            if(prime[n-a[i]])
            {
                printf("%lld %lld\n",a[i],n-a[i]);
                //cout<<a[i]<<" "<<n-a[i]<<endl;
                break;
            }
        }
    }
}
