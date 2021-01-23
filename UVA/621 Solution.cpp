#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        ll sz=st.size();
        //cout<<sz<<endl;
        if(st[sz-1]=='5' && st[sz-2]=='3')
            cout<<"-"<<endl;
        else if(st[0]=='9' && st[sz-1]=='4')
            cout<<"*"<<endl;
        else if(st[0]=='1' && st[1]=='9' && st[2]=='0')
            cout<<"?"<<endl;
        else
            cout<<"+"<<endl;
    }
}
