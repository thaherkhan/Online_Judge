#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,i=1;
    cin>>t;
    while(t--){
        ll n,rev=0,x;
        cin>>n;
        ll num=n;
        while(n!=0){
            x=n%10;
            rev=rev*10+x;
            n/=10;
        }
        if(rev==num)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
        i++;
    }
}
