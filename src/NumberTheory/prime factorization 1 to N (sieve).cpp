#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const ll N=1e6+9;

ll spf[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(ll i=2; i<N; i++){
        spf[i]=i;
    }
    for(ll i=2; i<N; i++){
        for(ll j=i; j<N; j+=i){
            spf[j]=min(i,spf[j]);
        }
    }

    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>ans;
        while(n>1){
            ans.push_back(spf[n]);
            n/=spf[n];
        }
        for(auto i: ans)cout<<i<<" "; cout<<endl;
    }

    return 0;
}


