#include<bits/stdc++.h>
using namespace std;

#define ll long long
map < string, ll > mp;
map < string, ll > :: iterator it;

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        string st;
        cin>>st;
        mp[st]++;
        getline(cin, st);
    }
    it=mp.begin();
    while(it!=mp.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

}
