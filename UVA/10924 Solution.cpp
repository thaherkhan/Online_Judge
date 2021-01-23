#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define size 10005

ll a[10005];

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
    ll x,y;
    char ch[30];
    while(scanf("%s",ch)!=EOF)
    {
        ll sum,sum1=0,sum2=0;
        ll len=strlen(ch);
        for(ll i=0; i<len; i++){
            if(ch[i]>='a' && ch[i]<='z'){
                x = ch[i]-96;
                sum1+=x;
            }
            else if(ch[i]>='A' && ch[i]<='Z'){
                y = ch[i]-38;
                sum2+=y;
            }
        }
        sum = sum1+sum2;
        sieve();
        if(a[sum]==0)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
}
