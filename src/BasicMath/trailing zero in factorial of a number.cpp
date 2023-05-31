#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
ll const N=1e6;
map<ll,ll>mp;



ll legendre_better(ll n){
    ll ans=INT_MAX;

    for(auto i: mp){
    ll n1=n,mxeach_prime=0;
    while(n1){
        mxeach_prime+=n1/i.first;
        n1/=i.first;
    }
    ll eachprime=mxeach_prime/i.second;
    ans=min(eachprime,ans);
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    mp[2]=1;
    mp[5]=1;
    ll n; cin>>n;
    while(n--){
        ll a;cin>>a;
        cout<<legendre_better(a)<<endl;

    }


    return 0;
}
