#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,cas=1;
    cin>>t;
    while(t--)
    {
        ll c=1,k=0;
        vector<string>st;
        string s1,s2;
        st.push_back("http://www.lightoj.com/");
        cout<<"Case "<<cas<<":"<<endl;
        while(1)
        {
            cin>>s1;
            if(s1=="VISIT")
            {
                if(k!=0)
                {
                    for(ll i=c; i>k; i--)
                    {
                        st.pop_back();
                        c--;
                    }
                }
                c++;
                cin>>s2;
                st.push_back(s2);
                cout<<s2<<endl;
                k=c;
            }
            else if(s1=="BACK")
            {
                if(k==1 || c==1)
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    for(ll i=k-2; i>=k-2; i--)
                    {
                        cout<<st[i]<<endl;
                    }
                    k--;
                }
            }
            else if(s1=="FORWARD")
            {
                if(k==c || c==1)
                    cout<<"Ignored"<<endl;
                else
                {
                    for(ll i=k; i<=k; i++)
                    {
                        cout<<st[i]<<endl;
                    }
                    k++;
                }
            }
            else if(s1=="QUIT")
                break;
        }
        cas++;
    }
}
