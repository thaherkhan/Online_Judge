#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp for(ll i=0; i<n; i++)
#define lps for(ll i=0; i<len; i++)


int main()
{
    /*ll n,s;
    cin>>n>>s;
    if(s%n==0)
        cout<<s/n<<endl;
    else
        cout<<(s/n)+1<<endl;*/
    ll n;
    while(scanf("%lld",&n)){
        if(n==0)
            return 0;
        else{
            ll a[n+5];
            lp
            scanf("%lld",&a[i]);

            sort(a, a+n);
            lp{
            printf("%lld",a[i]);
            if(i==n-1)
                break;
            printf(" ");
            }
        }
        printf("\n");
    }
}
