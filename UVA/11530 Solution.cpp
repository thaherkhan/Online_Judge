#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105];
    int arr[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    int T;
    scanf("%d", &T);
    getchar();
    for(int j=1; j<=T; j++)
    {
        int sum=0;
        gets(a);
        int len =strlen(a);
        for(int i=0; i<len; i++)
        {
            if(a[i]==' ')
                sum++;
            else
                sum+=arr[a[i]-'a'];
        }
        printf("Case #%d: %d\n", j, sum);

    }
}
