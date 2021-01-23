#include<bits/stdc++.h>
using namespace std;

#define ll long long
double const g=9.8;

int main()
{
    ll t,cas=1;
    while(cin>>t)
    {
        ll L,W,H,vlm=0,mxH=0,mxV=0;
        if(t==0)
            return 0;
        while(t--)
        {
            cin>>L>>W>>H;
            if(H>mxH)
            {
                vlm=L*W*H;
                mxH=H;
            }
            if(mxH==H)
            {
                vlm=max(vlm, L*W*H);
            }
        }
        cout<<vlm<<endl;
    }

}
