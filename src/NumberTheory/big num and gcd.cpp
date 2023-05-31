
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll N=1000005;

ll gcd(ll a,ll b)
{
    if(a==0)return b;
    if(b==0)return a;

    if(a<b)swap(a,b);
    return gcd(a%b,b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll c=gcd(a,b);
        ll d=gcd(b,c);

        ll ans=0;
        while(b!=d)
        {
            if(d==1)
            {
                ans=1;
                break;
            }
            else
                b/=d,d=gcd(b,c);

        }
        if(ans==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }




    return 0;
}
