#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    float x, y;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x>>y;
        float z = (5/9.0)*y;
        z+=x;
        printf("Case %d: %.2f\n", i, z);
    }
}
