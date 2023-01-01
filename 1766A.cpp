#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            ll x=i;
            while(x<=n)
            {
                cnt++;
                x=x*10;
            }
        }
        cout<<cnt<<endl;
    }
}