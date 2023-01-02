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
        vector<ll> v(n);
        ll cnt=0;
        ll m=1e9;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            cnt^=v[i]&1;
            ll x=v[i],t=0;
            while(x%2==v[i]%2)
            {
                x=x/2;
                t++;
            }
            m=min(m,t);
        }
        cout<<(cnt?m:0)<<endl;
    }
}