#include<bits/stdc++.h>
using namespace std;

int a[10];

int main()
{
    int t, j=1;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<3; i++)
            cin>>a[i];
        sort(a,a+3);
        cout<<"Case "<<j<<": "<<a[1]<<endl;
        j++;
    }
}
