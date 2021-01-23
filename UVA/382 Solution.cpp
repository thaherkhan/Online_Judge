#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp for(ll i=0; i<n; i++)

int main()
{
    printf("PERFECTION OUTPUT\n");
    int n;
    while(scanf("%d",&n)!=0){
        if(n==0)
            break;
        int s=0;
        for(int i=1; i<n; i++)
        {
            if(n%i==0){
                s+=i;
            }
        }
        if(s==n)
            printf("%5d  PERFECT\n",n);
        else if(s<n)
            printf("%5d  DEFICIENT\n",n);
        else if(s>n)
            printf("%5d  ABUNDANT\n",n);
        //printf("%d\n",s);
    }
    printf("END OF OUTPUT\n");
}
