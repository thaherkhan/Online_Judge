#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,L,U,T,count;
    scanf("%lld",&T);
    for(k=0; k<T; k++){
        long long m=0, n=0;
        scanf("%lld%lld",&L,&U);
        for(i=L; i<=U; i++){
            count=0;
            for(j=1; j<=sqrt(i); j++){
                if(i%j==0){
                    if(i%j==0)
                        count++;
                    if(i/j!=j)
                        count++;}}
            if(m<count){
            m=count;
                n=i;}}
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,U,n,m);}
}
