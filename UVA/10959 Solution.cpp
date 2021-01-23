#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define MX 100005

vector< ll >vt[10000];
bool visit[10000];
ll level[10000];
ll cost,temp,nx;
ll ar[1000];

void bfs()
{
    memset(level,-1,sizeof(level));
    queue< ll >q;
    q.push(0);
    level[0]=0;
    while(!q.empty())
    {
        ll fron=q.front();
        q.pop();
        ll sz=vt[fron].size();
        for(ll i=0; i<sz; i++)
        {
            if(level[vt[fron][i]]==-1)
            {
                level[vt[fron][i]]=level[fron]+1;
                q.push(vt[fron][i]);
            }
        }
    }
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<m; i++)
        {
            ll x,y;
            cin>>x>>y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        bfs();
        for(ll i=1; i<n; i++)
            cout<<level[i]<<endl;
        if(t>=1)
            cout<<endl;
        for(ll i=0; i<m; i++)
            vt[i].clear();
    }
}
