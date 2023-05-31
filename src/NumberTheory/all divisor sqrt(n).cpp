#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

///all divisor (sqrt(n))
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        ll n; cin>>n;
        vector<ll>v;
        for(ll i=1;i*i<=n; i++){
            if(n%i==0)v.push_back(i);
            if(i!=(n/i))v.push_back(n/i);
        }
        sort(v.begin(), v.end());
        for(auto i: v)cout<<i<<" ";
        cout<<endl;


    return 0;
}

