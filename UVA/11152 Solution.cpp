#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926535897

int main()
{
    double trMulti, tr, crVio, trOutCr, trVio, crRose, crSun;
    long long int a, b, c;
    while(scanf("%lld%lld%lld", &a,&b,&c) == 3)
    {
        trMulti = (a*b*c)/4.0;
        tr = (a+b+c)/2.0;
        crVio = sqrt(tr*(tr-a)*(tr-b)*(tr-c));
        trVio = crVio/tr;

        crRose = (trVio * trVio * pi);

        trOutCr = (trMulti/crVio);

        crSun = (trOutCr * trOutCr * pi)-crVio;

        crVio = (crVio-crRose);

        printf("%.4lf %.4lf %.4lf\n", crSun, crVio, crRose);
    }

}
