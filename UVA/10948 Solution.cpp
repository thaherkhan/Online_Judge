#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define size 1000005

ll a[1000005];

void sieve()
{
    for(ll i=4; i<=size; i+=2)
        a[i]=1;
    for(ll i=3; i*i<=size; i+=2){
        if(a[i]==0){
            for(ll j=i*i; j<=size; j=j+(2*i))
                a[j]=1;
        }
    }
}

int main()
{
    ll i,n;
    sieve();
    cin>>n;
    while(n!=0){
        if(n==1)
            cout<<n<<":"<<endl;
        else{
            ll coun=0;
            for( i=2; i<=n/2; i++){
                if(a[i]==0){
                    if(a[n-i]==0){
                        cout<<n<<":"<<endl<<i<<"+"<<(n-i)<<endl;
                        coun++;
                        break;
                    }
                }
            }
            if(i==((n/2)+1) && coun==0)
                cout<<n<<":"<<endl<<"NO WAY!"<<endl;
        }
        cin>>n;
    }
}
