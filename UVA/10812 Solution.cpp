#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, s, d;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        if(s<d)
            cout<<"impossible"<<endl;
        else
        {
            int r = (s+d);
            int q = (s-d);
            if(r%2==0 || q%2==0)
            {
                r/=2;
                q/=2;
                cout<<r<<" "<<q<<endl;
            }
            else
                cout<<"impossible"<<endl;
        }
    }
}
