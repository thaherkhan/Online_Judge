#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define lp for(ll i=0; i<n; i++)
#define lp2 for(ll j=0; j<m; j++)
#define lps for(ll k=0; k<len; k++)

int Check(int n)
{
    if(n==1)
        return 1;
    else{
        int coun=1;
        if(n%2)
            return coun+=Check(3*n+1);
        else
            return coun+=Check(n/2);
    }
}

int main(){

    int x,y;
    while(cin>>x>>y){
        int a=(x>y)?x:y;
        int b=(x<y)?x:y;
        //cout<<a<<" "<<b<<endl;
        int mx=0,coun;
        for(int i=b; i<=a; i++){
            coun=Check(i);
            if(coun>mx)
                mx=coun;
        }
        cout<<x<<" "<<y<<" "<<mx<< endl;
    }
}
