#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    while(gets(a))
    {
        int i, len,x, coun=0;
        len = strlen(a);
        for(i=0; i<len; i++)
        {
            if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
            {
                coun++;
                while(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
                    i++;
                i--;
            }
        }
        printf("%d\n",coun);
    }
    return 0;
}
