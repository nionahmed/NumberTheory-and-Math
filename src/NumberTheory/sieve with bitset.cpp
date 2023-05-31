#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

///sieve using bitset

const ll N=1e8+9;
bool f[N];
vector<ll>primes;
void sieve(ll n){
    f[1]=true;
    for(ll i=1; i*i<=n; i++){
        if(!f[i]){
            for(ll j=i*i; j<=n; j+=i){
                f[j]=true;
            }
        }
    }
    for(ll i=2; i<=n; i++){
        if(!f[i])primes.push_back(i);
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n=N-9;
    sieve(n);
    cout<<primes.size()<<endl;

    return 0;
}

