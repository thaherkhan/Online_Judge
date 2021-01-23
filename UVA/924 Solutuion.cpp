#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define lp for(ll i=1; i<=n; i++)
#define lp2 for(ll j=0; j<m; j++)
#define lps for(ll k=0; k<len; k++)

vector < int > edge[5000];
int step[5000], freq[5000], mx, dep, node;

void Bfs(int source)
{
    queue < int > q;
    int fron, sz, d=0, m;
    q.push(source);
    while(q.size())
    {
        fron=q.front();
        q.pop();
        step[source]=0;
        sz=edge[fron].size();

        for(int i=0; i<sz; i++)
        {
            int value=edge[fron][i];

            if(step[value]== -1)
            {
                step[value]=step[fron]+1;
                q.push(value);
                freq[step[value]]++;
            }
        }
    }
    for(int i=0; i<node; i++)
    {
        if(freq[i]>mx)
        {
            mx=freq[i];
            dep=i;
        }
    }
}

int main()
{
    int n,y,z,t,i;
    cin>>node;
    for(int i=0; i<node; i++)
    {
        cin>>n;
        while(n--)
        {
            cin>>y;
            edge[i].push_back(y);
        }
    }
    cin>>t;
    while(t--)
    {
        mx=-1,dep=-1;
        cin>>z;
        if(edge[z].size()==0)
            cout<<"0"<<endl;
        else
        {
            memset(step, -1, sizeof(step));
            memset(freq, 0, sizeof(freq));
            Bfs(z);
            cout<<mx<<" "<<dep<<endl;
        }

    }
}
