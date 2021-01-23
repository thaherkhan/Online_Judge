#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a+b)>c)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
}
