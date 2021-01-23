#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10056
#define dl double

const int mx=1e4+9;
char st1[1000009];
char st2[1000009];


int main()
{
    ll t,cas=1;
    scanf("%lld",&t);
    while(t--)
    {
        string s1,s2;
        scanf("%s%s",st1,st2);
        s1=string(st1,strlen(st1));
        s2=string(st2,strlen(st2));
        ll ans=0;
        for(ll i=0; i<s1.size(); )
        {
            ll findd=s1.find(s2,i);
            if(findd==-1)
                break;
            else
            {
                ans++;
                i=findd+1;
            }
        }
        printf("Case %lld: %lld\n",cas,ans);
        cas++;
    }
}
