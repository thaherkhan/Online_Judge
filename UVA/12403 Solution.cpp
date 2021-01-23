#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    int tk,c=0,ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s=="donate"){
            cin>>tk;
            ans+=tk;
            //cout<<ans<<endl;
            //c++;
            }
        else
            cout<<ans<<endl;
    }
}
