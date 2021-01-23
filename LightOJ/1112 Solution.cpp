#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000005


ll tree[mx*4];
ll a[mx];


void build(ll node, ll start, ll endd)
{
    if(start==endd)
    {
        tree[node]=a[start];
        return ;
    }
    ll left=2*node;
    ll right=2*node+1;
    ll mid=(start+endd)/2;
    build(left,start,mid);
    build(right,mid+1,endd);
    tree[node]=tree[left]+tree[right];
    return ;
}


void update(ll node, ll start, ll endd, ll idx, ll val)
{
    if(idx>endd || idx<start)
        return ;
    if(start>=idx && endd<=idx)
    {
        if(val==0)
        {
            tree[node]=0;
            a[idx]=0;
            return ;
        }
        else
        {
            tree[node]+=val;
            a[idx]+=val;
            return ;
        }
    }
    ll left=2*node;
    ll right=2*node+1;
    ll mid=(start+endd)/2;
    update(left,start,mid,idx,val);
    update(right,mid+1,endd,idx,val);
    tree[node]=tree[left]+tree[right];
    return ;
}


ll query(ll node, ll start, ll endd, ll i, ll j)
{
    if(start>=i && endd<=j)
        return tree[node];
    if(i>endd || j<start)
        return 0;
    ll left=2*node;
    ll right=2*node+1;
    ll mid=(start+endd)/2;
    ll q1=query(left,start,mid,i,j);
    ll q2=query(right,mid+1,endd,i,j);
    return q1+q2;
}


int main()
{
    ll t,cas=0;
    scanf("%lld",&t);
    while(t--)
    {
        cas++;
        //cout<<"Case "<<cas<<": "<<endl;
        ll m,n;
        scanf("%lld%ldd",&n,&m);
        for(ll i=1; i<=n; i++)
            scanf("%lld",&a[i]);
        build(1,1,n);
        printf("Case %lld:\n",cas);
        for(ll j=0; j<m; j++)
        {
            ll q,ind,k,l;
            scanf("%lld",&q);
            if(q==1)
            {
                scanf("%lld",&k);
                ll sum=a[k+1];
                update(1,1,n,k+1,0);
                printf("%lld\n",sum);
            }
            else if(q==2)
            {
                scanf("%lld%lld",&k,&l);
                update(1,1,n,k+1,l);
            }
            else if(q==3)
            {
                scanf("%lld%lld",&k,&l);
                ll r=query(1,1,n,k+1,l+1);
                printf("%lld\n",r);
            }
        }
    }
}
