#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

vector< ll >v[5000];
ll level[5000],visit[5000];
ll mx,dep,node;

void Bfs(ll source)
{
    queue< ll >q;
    ll d=0,m;
    q.push(source);
    while(q.size())
    {
        ll fron=q.front();
        q.pop();
        level[source]=0;
        ll sz=v[fron].size();

        for(ll i=0; i<sz; i++)
        {
            ll value=v[fron][i];

            if(level[value]== -1)
            {
                level[value]=level[fron]+1;
                q.push(value);
                visit[level[value]]++;
            }
        }
    }
    for(ll i=0; i<node; i++)
    {
        if(visit[i]>mx)
        {
            mx=visit[i];
            dep=i;
        }
    }
}

int main()
{
    ll n,y,z,t,i;
    cin>>node;
    for(ll i=0; i<node; i++)
    {
        cin>>n;
        while(n--)
        {
            cin>>y;
            v[i].push_back(y);
        }
    }
    cin>>t;
    while(t--)
    {
        mx=-1,dep=-1;
        cin>>z;
        if(v[z].size()==0)
            cout<<"0"<<endl;
        else
        {
            memset(level, -1, sizeof(level));
            memset(visit, 0, sizeof(visit));
            Bfs(z);
            cout<<mx<<" "<<dep<<endl;
        }

    }
}
