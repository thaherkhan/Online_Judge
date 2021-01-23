#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int t,i=1;
    cin>>t;
    double a,x,y;
    while(t--)
    {
        cin>>a;
        x=(a*2)*(a*2);
        y=pi*(a*a);
        printf("Case %d: %.2lf\n",i,(x-y));
        i++;
    }
}
