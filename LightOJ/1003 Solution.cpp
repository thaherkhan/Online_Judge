#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll>vt[100000];
map<string, ll>mp;
map<string, ll>::iterator it;
ll white=0,gray=1,black=-1;
ll status[100000],flag=0;

void DFS(ll s)
{
    status[s]=gray;
    ll sz=vt[s].size();
    for(ll i=0; i<sz; i++)
    {
        ll v=vt[s][i];
        if(status[s]==gray && status[v]==gray)
            flag=1;
        if(status[v]==white)
        {
            DFS(v);
        }
    }
    status[s]=black;
}

int main()
{
    string st1,st2;
    ll t,x,y,n,c=0,j=1;
    cin>>t;
    while(t--)
    {
        c=0,flag=0;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>st1>>st2;
            if(mp[st1]==0)
            {
                ++c;
                mp[st1] = c;
            }
            if(mp[st2]==0)
            {
                ++c;
                mp[st2] = c;
            }
            vt[mp[st1]].push_back(mp[st2]);
        }
        ll k = mp.size();
        for(ll i=0; i<=k; i++)
            status[i]=0;
        for(ll i=1; i<=k; i++)
        {
            if(status[i]==white)
                DFS(i);
        }
        for(ll i=1; i<=k; i++)
            vt[i].clear();
        if(flag==1)
            cout<<"Case "<<j<<": No"<<endl;
        else
            cout<<"Case "<<j<<": Yes"<<endl;
        j++;
        mp.clear();
    }
}
