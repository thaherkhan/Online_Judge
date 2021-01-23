#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, num;
    cin>>t;
    char c,ch[10];
    while(t--)
    {
        for(int i=0; i<3; i++)
            cin>>ch[i];
        cin>>c>>num;
        int ans = (((ch[0])-65)*pow(26,2))+(((ch[1])-65)*pow(26,1))+(((ch[2])-65)*pow(26,0));
        int res = abs(ans-num);

        if(res<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }
}
