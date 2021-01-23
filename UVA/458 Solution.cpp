#include<stdio.h>
#include<string.h>
int main()
{
    int i, len;
    char a[100];
    while(gets(a))
    {
        len = strlen(a);
        for(i=0; i<len; i++)
        {
            printf("%c",a[i]-7);
        }
        printf("\n");
    }
    return 0;
}
