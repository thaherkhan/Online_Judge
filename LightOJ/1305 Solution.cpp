#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        ll ax,ay,bx,by,cx,cy,area;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        ll dx=ax+cx-bx;
        ll dy=ay+cy-by;

        area=abs((ax*by+bx*cy+cx*dy+dx*ay)-(ay*bx+by*cx+cy*dx+dy*ax));
        cout<<"Case "<<cas<<": "<<dx<<" "<<dy<<" "<<area/2<<endl;
        cas++;
    }
}
