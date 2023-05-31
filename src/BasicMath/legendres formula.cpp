
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
ll const N=1e6;


ll legendre(ll n, ll p){
    ll ans=0;
    ll curr=p;
    while(1){
        ans+=(n/curr);
        if(curr<=n/p)
        curr=curr*p;
        else break;
    }
    return ans;
}

ll legendre_better(ll n, ll p){
    ll ans=0;

    while(n){
        ans+=n/p;
        n/=p;
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
    }


    return 0;
}
