#include<stdio.h>
int main()
{
    int C, i, j, N;
    scanf("%d",&C);
    for(i=0; i<C; i++)
    {
        float sum=0, par=0, st=0, avg=0;
        scanf("%d",&N);
        int a[N];
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[j]);
            sum = sum + a[j];
        }
        par = sum/N;
        for(j=0; j<N; j++)
        {
            if(par<a[j])
            {
                st++;
            }
        }
        avg = (st/N)*100;
        printf("%.3f%%\n",avg);
    }
    return 0;
}
