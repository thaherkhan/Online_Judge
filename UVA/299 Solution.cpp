#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp1 for(ll i=0; i<n; i++)
#define lp2 for(ll i=n-1; i>=0; i--)
#define lp3 for(ll j=0; j<i; j++)

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+5],coun=0,c;
        lp1
            cin>>a[i];
        lp2
        {
            lp3
            {
                if(a[j]>a[j+1])
                {
                    c=a[j];
                    a[j]=a[j+1];
                    a[j+1]=c;
                    coun++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<coun<<" swaps."<<endl;
    }
}
