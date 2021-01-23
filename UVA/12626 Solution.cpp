#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp1 for(int i=0; ch[i]; i++)
#define lp2 for(int i=1; i<=s.length(); i++)

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[1005]={};
        char ch[1005];
        cin>>ch;
        lp1
            a[ch[i]]++;
        ll ans =100005;
        ans = min(ans, a['M']/1);
        ans = min(ans, a['A']/3);
        ans = min(ans, a['R']/2);
        ans = min(ans, a['G']/1);
        ans = min(ans, a['T']/1);
        ans = min(ans, a['I']/1);

       cout<<ans<<endl;
    }
    return 0;
}
