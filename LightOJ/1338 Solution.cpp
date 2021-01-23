#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    getchar();
    ll cas=1;
    string s1,s2;
    for(ll j=1; j<=t; j++)
    {
        s1.clear(),s2.clear();
        getline(cin, s1);
        getline(cin, s2);

        ll sz1=s1.size();
        ll sz2=s2.size();

        ll res1=0,res2=0;
        for(ll i=0; s1[i]; i++)
        {
            s1[i]=tolower(s1[i]);
            if(s1[i]!=' ')
                res1+=s1[i];
        }
        for(ll i=0; s2[i]; i++)
        {
            s2[i]=tolower(s2[i]);
            if(s2[i]!=' ')
                res2+=s2[i];
        }
        if(res1==res2)
            printf("Case %lld: Yes\n",cas);
        else
            printf("Case %lld: No\n",cas);
        cas++;
    }
}
