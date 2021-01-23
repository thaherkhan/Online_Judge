#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int l, w, h;
    for(int i=1; i<=t; i++)
    {
        cin>>l>>w>>h;
        if(l>20 || w>20 || h>20)
            printf("Case %d: bad\n", i);
        else
            printf("Case %d: good\n", i);
    }
}
