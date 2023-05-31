#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

///all number(1 to N) with odd number of divisor (sqrt(n))
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        ll n; cin>>n;
        vector<ll>v;
        for(ll i=1;i*i<=n; i++){
            v.push_back(i*i);

        }
        //sort(v.begin(), v.end());
        ll sn=sqrt(n);
        cout<<sn<<endl;
        for(auto i: v)cout<<i<<" ";
        cout<<endl;


    return 0;
}


