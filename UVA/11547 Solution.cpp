#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int sum = abs((((((n*567)/9)+7492)*235)/47)-498);
        sum/=10;
        sum%=10;
        printf("%d\n", sum);
    }
}
