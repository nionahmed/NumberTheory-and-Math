#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
    ll n; cin>>n; ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll sum=0,ans=0;
    for(ll i=0; i<n; i++){
        sum=max((ll)0,sum+a[i]);
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    }

    return 0;
}
