#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
ll const N=1e6;
map<ll,ll>mp;
void prime_fact(ll p){
    for(ll i=2; i<=p; i++){
        while(p%i==0){
            mp[i]++;
            p/=i;
        }
    }
}


ll legendre_better(ll n, ll p){
    ll ans=INT_MAX;
    prime_fact(p);
    for(auto i: mp){
//    ll n1=n,mxeach_prime=0;
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

    ll n; cin>>n;
    while(n--){
        ll a,pr;cin>>a>>pr;
        cout<<legendre_better(a,pr)<<endl;
        mp.clear();
    }


    return 0;
}
