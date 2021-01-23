#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
int main()
{
    ll t,T=1;
    cin>>t;
    while(t--)
    {
      dl v1,v2,v3,a1,a2;
      cin>>v1>>v2>>v3>>a1>>a2;
      dl mx=max((v1/a1),(v2/a2));
      dl ans=mx*v3;
    
      dl d=(v1*v1)/(2.0*a1)+(v2*v2)/(2.0*a2);
    
      printf("Case %lld: %.10lf %.10lf\n",T,d,ans);
      T++;
  }      
}
