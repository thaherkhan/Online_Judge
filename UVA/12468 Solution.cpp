#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a,b,x,y;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a==-1 && b==-1)
            break;
        if(a>b){
            x=a-b;
            y=b+100-a;
        }
        else{
            x=b-a;
            y=a+100-b;
        }
        ll ans=min(x,y);
        cout<<ans<<endl;
    }
}
