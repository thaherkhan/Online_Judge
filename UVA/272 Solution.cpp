#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll ch, q=1;
    while((ch=getchar()) != EOF)
    {
        if(ch=='"')
        {
            if(q==1)
                printf("``");
            else
                printf("''");
            q=!q;
        }
        else
            printf("%c",ch);
    }
}
