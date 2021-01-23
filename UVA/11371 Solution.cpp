#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll coun;
vector < ll > vt;

ll powr(ll n)
{
    ll sum=1;
    for(ll i=1; i<=n; i++)
        sum*=10;
    return sum;
}

void rev(ll num)
{
    ll res, n;
    ll s=log10(n);
    n=num;
    while(num>0)
    {
        res=num%10;
        if(res==0)
            coun++;
        vt.push_back(res);
        num/=10;
    }
    sort(vt.begin(),vt.end());
}

int main()
{
    ll n,x,k,rev1,rev2,i=0,j=0;
    while(cin>>n)
    {
        rev(n);
        //cout<<r<<endl<<endl;
        rev1=rev2=0;
        ll sz=vt.size();
        i=0;
        for(i=sz-1; i>=0; i--)
        {
            if(vt[i]<=0)
                break;
            rev2=rev2+vt[i]*powr(i);
        }
        x=0;
        for(i=0,j=sz-1; i<sz,j>=0; i++,j--)
        {
            if(vt[i]==0)
                continue;
            else if(vt[i]>0 && !x)
            {
                rev1+=vt[i]*powr(sz-1);
                x=1;
                continue;
            }
            else
                rev1=rev1+vt[i]*powr(j);
        }
        //cout<<rev1<<" "<<rev2<<endl;
        k=rev2-rev1;
        //cout<<k<<endl;
        cout<<rev2<<" - "<<rev1<<" = "<<k<<" = "<<9<<" * "<<(k/9)<<endl;
        i=0;
        vt.clear();
    }
}
