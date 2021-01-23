#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char a;
    while(scanf("%c", &a)==1)
    {
        if((a=='a') || (a=='A') || (a=='e') || (a=='E') || (a=='i') || (a=='I') || (a=='o') || (a=='O') || (a=='u') || (a=='U'))
        {
            printf("%c", a);
            while(scanf("%c", &a)==1)
            {
                if(isalpha(a)==0)
                    break;
                printf("%c", a);
            }
            printf("ay%c",a);
        }
        else if(isalpha(a))
        {
            n = a;
            while(scanf("%c", &a))
            {
                if(isalpha(a)==0)
                    break;
                printf("%c",a);
            }
            printf("%cay%c", n,a);
        }
        else
            printf("%c",a);
    }
}
