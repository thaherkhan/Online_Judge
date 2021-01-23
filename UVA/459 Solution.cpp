#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define MX 100005

vector< ll >vt[10000];
ll visit[10000];
ll level[10000];
ll cost,temp,nx;
ll ar[1000];

void bfs(ll s)
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
            if(visit[u]==-1)
            {
                visit[u]=0;
                q.push(u);
            }
        }
    }
}


int main()
{
    char ch,ch2[50],ch3[50];
    ll t,n1,n2=0;
    cin>>t;
    getchar();
    while(t--)
    {
        if(n2!=0)
            cout<<endl;
        char ch;
        cin>>ch;
        getchar();
        ll num=ch-'A'+1;
        memset(visit,-1,sizeof(visit));
        while(gets(ch2))
        {
            if(ch2[0]=='\0')
                break;
            n1=ch2[0]-'A'+1;
            n2=ch2[1]-'A'+1;
            vt[n1].push_back(n2);
            vt[n2].push_back(n1);
        }
        ll coun=0;
        for(ll i=1; i<=num; i++)
        {
            if(visit[i]==-1)
            {
                coun++;
                bfs(i);
            }
        }
        n2++;
        cout<<coun<<endl;
        for(ll i=0; i<=num; i++)
            vt[i].clear();
    }
}
