#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,x;
    while(cin>>n)
    {
        if(n==0)
            break;
        x=sqrt(n);
        if(x*x==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
