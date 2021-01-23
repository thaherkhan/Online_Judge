#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, b, c, i, j, arr[105];
    char a[1000000], k, l;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        getchar();
        gets(a);
        int len = strlen(a);
        for(j=65; j<=90; j++)
        {
            arr[j] = j;
        }
        scanf("%d", &n);
        while(n--)
        {
            getchar();
            scanf("%c %c", &k, &l);
            b = (int)l;
            c = (int)k;
            for(j=65; j<=90; j++)
            {
                if(arr[j]==b)
                    arr[j] = c;
            }
        }
        for(j=0; j<len; j++)
        {
            if(isalpha(a[j]))
                printf("%c", arr[a[j]]);
            else
                printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}
