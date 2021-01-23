#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

ll n,x,y,e;
vector< ll >vt[200];
ll color[200];

ll Bfs(ll source)
{
    memset(color,-1,sizeof color);

    queue< ll >q;
    q.push(source);
    color[source]=1;
    while(!q.empty())
    {
        ll fron=q.front();
        q.pop();
        ll sz=vt[fron].size();
        for(ll i=0; i<sz; i++)
        {
            ll v=vt[fron][i];

            if(color[v]==-1)
            {
                if(color[fron]==1)
                    color[v]=2;
                else if(color[fron]==2)
                    color[v]=1;
                q.push(v);
            }
            else
            {
                if(color[fron]==color[v])
                    return 0;
            }
        }
    }
    return 1;
}


int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        cin>>e;
        for(ll i=0; i<e; i++)
        {
            cin>>x>>y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }

        if(Bfs(0))
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;

        for(ll i=0; i<n; i++)
            vt[i].clear();
    }
}
