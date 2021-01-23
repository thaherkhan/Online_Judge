#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define MX 10005

vector< ll >vt[10000];
ll visit[10000];
ll level[10000];
ll cost,temp;
ll ar[1000];

void bfs(ll s, ll c)
{
    queue< ll >q;
    q.push(s);
    while(!q.empty())
    {
        ll fron=q.front();
        q.pop();
        ll sz=vt[fron].size();
        for(ll i=0; i<sz; i++)
        {
            ll u=vt[fron][i];
            if(visit[u]!=c)
            {
                visit[u]=c;
                q.push(u);
            }
        }
    }
}


int main()
{
    ll t,k,n,m,x,y,coun,z=1;
    cin>>t;
    while(t--)
    {
        cin>>k>>n>>m;
        memset(visit,-1,sizeof(visit));
        for(ll i=0; i<k; i++)
            cin>>ar[i];
        for(ll i=0; i<m; i++)
        {
            cin>>x>>y;
            vt[x].push_back(y);
        }
        visit[ar[k-1]]=k;
        bfs(ar[k-1],k);
        coun=0;
        for(x=1; x<=n; x++)
        {
            if(visit[x]==k)
                coun++;
        }
        cout<<"Case "<<z<<": "<<coun<<endl;
        z++;
        for(ll i=0; i<n; i++)
            vt[i].clear();
    }
}
