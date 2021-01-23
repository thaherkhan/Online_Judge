#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, j=1;
    cin>>t;
    while(t--)
    {
        string s;
        int n, tk,c=0,ans=0;
        cin>>n;
        cout<<"Case "<<j<<":"<<endl;
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
        j++;
    }

}
