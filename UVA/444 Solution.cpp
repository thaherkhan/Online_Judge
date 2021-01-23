#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000];
    while(gets(a))
    {
        int len = strlen(a);
        for(int i=len-1; i>=0; i--)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                if(a[i]!='1')
                {
                    int x = (char)(10*(a[i]-'0')+(a[i-1]-'0'));
                    char y = x;
                    printf("%c", y);
                    i--;
                }
                else
                {
                    int x = (char)(100+(a[i-1]-'0')*10+(a[i-2]-'0'));
                    char y = x;
                    printf("%c", y);
                    i-=2;
                }
            }
            else
            {
                int x=(int)a[i];
                while(x!=0)
                {
                    printf("%d", x%10);
                    x/=10;
                }
            }
        }
        printf("\n");
    }
}
