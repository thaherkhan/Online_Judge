#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=1;
    char a[25];
    while(1)
    {
        scanf("%s", a);
        if(strcmp(a, "#")==0)
            break;

        else if(strcmp(a, "HELLO")==0)
            printf("Case %d: ENGLISH\n", i);

        else if(strcmp(a, "HOLA")==0)
            printf("Case %d: SPANISH\n", i);

        else if(strcmp(a, "HALLO")==0)
            printf("Case %d: GERMAN\n", i);

        else if(strcmp(a, "BONJOUR")==0)
            printf("Case %d: FRENCH\n", i);

        else if(strcmp(a, "CIAO")==0)
            printf("Case %d: ITALIAN\n", i);

        else if(strcmp(a, "ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n", i);

        else
            printf("Case %d: UNKNOWN\n", i);

        i++;
    }
}
