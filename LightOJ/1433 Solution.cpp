#include<bits/stdc++.h>
using namespace std;

#define ll long long
double const g=9.8;

vector <string> v;
map <string,ll> mp;
string st[200];

ll func(ll n, ll a, ll b)
{
    return (n*b-n*n*a);
}


int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        double ox,oy,ax,ay,bx,by,a,b,c,d,ans;

        cin>>ox>>oy>>ax>>ay>>bx>>by;

        //cout<<ox<<" "<<oy<<endl;
        a=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        b=a;
        c=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));

        d=acos( (a*a+b*b-c*c)/(2*a*b) );
        //cout<<d<<endl;
        ans=a*d;
        //cout<<dis1<<endl;
        printf("Case %lld: %.10lf\n",cas,ans);
        cas++;
    }

}
