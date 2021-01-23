#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp1 for(int k=0; k<s.length(); k++)

int main()
{
    int t,j=1;
    cin>>t;
    while(t--){
        int n,coun=0;
        string s;
        cin>>n;
        cin>>s;
        lp1{
            if(s[k]=='#')
                continue;

            coun++;
            k+=2;
        }
        cout<<"Case "<<j<<": "<<coun<<endl;j++;
    }
}
