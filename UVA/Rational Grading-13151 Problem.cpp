#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,res,k;
    char ch[25],ch1[25];
    while(scanf(" %s %lld", ch, &n)==2)
    {
        if(strlen(ch)==1 && ch[0]=='0' && n==0)
        {
            break;
        }
        ll len=strlen(ch);
        if(len>2 && ch[1]=='x')
        {
            res=0;
            for(ll i=2; i<strlen(ch); i++)
            {
                if(ch[i]>='0' && ch[i]<='9')
                    res=res*16+ch[i]-'0';
                else
                    res=res*16+ch[i]-'A'+10;
            }
        }
        else if(len>1 && ch[0]=='0')
        {
            res=0;
            for(ll i=1; i<strlen(ch); i++)
                res=res*8+ch[i]-'0';
        }
        else
        {
            res=0;
            for(ll i=0; i<strlen(ch); i++)
                res=res*10+ch[i]-'0';
        }
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            cin>>ch1>>k;
            if(strlen(ch1)==1)
            {
                if(k==res) ans++;
                res=k;
            }
            else
            {
                if(ch1[0]=='i')
                {
                    if(res==k) ans++;
                    if(ch1[1]=='+') res=k+1;
                    else res=k-1;
                }
                else
                {
                    if(ch1[0]=='+') res++;
                    else res--;
                    if(res==k) ans++;
                    res=k;
                }
            }
        }
        cout<<ans<<endl;
    }

}
