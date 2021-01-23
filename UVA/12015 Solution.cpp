#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[110];
    int n,a[110],i;
    cin>>n;
    for( i=1; i<=n; i++)
    {
        for(int j=0; j<10; j++)
            cin>>s[j]>>a[j];
        int mx=a[0];
        for(int j=1; j<10; j++)
        {
            if(a[j]>mx)
                mx=a[j];
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0; j<10; j++)
        {
            if(a[j]==mx)
                cout<<s[j]<<endl;
        }
    }
}
