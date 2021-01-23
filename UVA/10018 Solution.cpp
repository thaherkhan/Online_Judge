#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll rev(ll n)
{
    ll res=0;
    while(n>0)
    {
        res=(n%10)+res*10;
        n/=10;
    }
    return res;
}

int main()
{
    ll n,a,b,coun=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        while(1){
            b=rev(a);
            if(a==b){
            cout<<coun<<" "<<a<<endl;break;}
            else
                a+=b;
            coun++;
        }
        coun=0;
    }
}
