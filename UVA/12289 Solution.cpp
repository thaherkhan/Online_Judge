#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    scanf("%lld",&n);
    char a[100];
    for(ll i=0; i<n; i++)
    {
        scanf("%s",a);
        ll len=strlen(a);
        if(len==5)
            printf("3\n");
        else
        {
            if((a[0]=='t' && a[1]=='w') || (a[0]=='t' && a[2]=='o') || (a[1]=='w' && a[2]=='o'))
                printf("2\n");
            else
                printf("1\n");
        }
    }
    return 0;
}
