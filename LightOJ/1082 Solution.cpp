#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll tree[500005];

void build(ll a[], ll node, ll start, ll endd, ll tree[])
{
    if(start==endd)
        tree[node]=a[start];
    else
    {
        ll mid=(start+endd)/2;
        build(a,2*node,start,mid,tree);
        build(a,2*node+1,mid+1,endd,tree);
        tree[node]=min(tree[2*node],tree[2*node+1]);
    }
}

/*void update(ll a[], ll node, ll start, ll endd, ll idx, ll val, ll tree[])
{
    if(start==endd)
    {
        a[idx]=val;
        tree[node]=val;
    }
    else
    {
        ll mid=(start+endd)/2;
        if(start <= idx && idx <=mid)
        {
            update(a,2*node,start,mid,idx,val,tree);
        }
        else
        {
            update(a,2*node+1,mid+1,endd,idx,val,tree);
        }
        tree[node]=min(tree[2*node],tree[2*node+1]);
    }
}*/

ll query(ll node, ll start, ll endd, ll x, ll y, ll tree[])
{
    if(y<start || endd<x)
        return 1000005;
    if(x<=start && endd<=y)
        return tree[node];
    ll mid=(start+endd)/2;
    ll p1=query(2*node,start,mid,x,y,tree);
    ll p2=query(2*node+1,mid+1,endd,x,y,tree);
    ll mn=min(p1,p2);
    return mn;
}

int main()
{
    ll n,m,t,k=1;
    scanf("%lld",&t);
    while(t--)
    {
        getchar();
        ll a[100005];
        scanf("%lld%lld",&n,&m);
        for(ll i=1; i<=n; i++){
            scanf("%lld",&a[i]);
        }
        build(a,1,1,n,tree);
        ll x,y;
        cout<<"Case "<<k<<":"<<endl;
        for(ll i=1; i<=m; i++)
        {
            cin>>x>>y;
            cout<<query(1,1,n,x,y,tree)<<endl;
        }
        k++;
    }
}
