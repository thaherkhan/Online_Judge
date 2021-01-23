#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 100005

ll a[mx];

struct st{

    ll lazy,sum;
} tree[100005*3];


void build(ll node, ll start, ll endd)
{
    if(start==endd)
    {
        tree[node].sum = a[start];
        return ;
    }
    ll mid=(start+endd)/2;
    ll left=2*node;
    ll right=2*node+1;

    build(left,start,mid);
    build(right,mid+1,endd);

    tree[node].sum = tree[left].sum + tree[right].sum;
}

void update(ll node, ll start, ll endd, ll x, ll y)
{
    if(x>endd || y<start)
        return ;
    if(start>=x && endd<=y)
    {
        tree[node].sum +=((endd-start+1)*1);
        tree[node].lazy += 1;
        return ;
    }
    ll mid=(start+endd)/2;
    ll left=2*node;
    ll right=2*node+1;

    update(left,start,mid,x,y);
    update(right,mid+1,endd,x,y);

    tree[node].sum = tree[left].sum + tree[right].sum + ((endd-start+1)*tree[node].lazy);


}

ll query(ll node, ll start, ll endd, ll x, ll y, ll carry=0)
{
    if(x>endd || y<start)
        return 0;
    if(start>=x && endd<=y)
    {
        return tree[node].sum + carry*(endd-start+1);
    }
    ll mid=(start+endd)/2;
    ll left=2*node;
    ll right=2*node+1;

    ll q1=query(left,start,mid,x,y,carry+tree[node].lazy);
    ll q2=query(right,mid+1,endd,x,y,carry+tree[node].lazy);

    return q1+q2;
}


int main()
{
    ll t,n,x,y,len,k=1;
    scanf("%lld",&t);
    while(t--)
    {
        memset(tree, 0 ,sizeof(tree));
        char ch[mx];
        scanf("%s %lld",ch,&n);
        len=strlen(ch);
        //cout<<len<<endl;
        a[0]=0;
        for(ll i=0; i<len; i++)
            a[i]=ch[i]-'0';
        build(1,0,len-1);
        printf("Case %lld:\n",k);
        while(n--)
        {
            char c[5];
            scanf("%s",c);
            if(c[0]=='I')
            {
                scanf("%lld%lld",&x,&y);
                update(1,0,len-1,x-1,y-1);
            }
            else if(c[0]=='Q')
            {
                scanf("%lld",&x);
                ll ans=query(1,0,len-1,x-1,x-1)%2;
                printf("%lld\n",ans);
            }
        }

    k++;
    }
}
