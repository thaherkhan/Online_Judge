#include<bits/stdc++.h>
using namespace std;

#define p (a%3==0)
#define q (b%3==2)
#define x (a/3)
#define y (b/3)


int main()
{
    long long t,a,b,z,i=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        z=(y-x);
        if(p)
            z++;
        z+=(y-x);
        if(q)
            z++;
        printf("Case %lld: %lld\n",i,z);
        i++;
    }
}
