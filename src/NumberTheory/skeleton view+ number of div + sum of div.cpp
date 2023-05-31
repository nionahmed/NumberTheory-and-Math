#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

///skeleton view+ number of div + sum of div

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<ll,ll> mp;
    for (int i = 2; i * i <= n; i++)
    {

            while (n % i == 0)
            {
                mp[i]++;
                n /= i;
            }

    }
    if (n > 1) mp[n]++;
    ll nod=1;
    ll sod=1;
    for(auto i: mp){
        nod*=(i.second+1);
        ll k=pow(i.first, (i.second+1));

        ll z=(k-1)/(i.first-1);

        sod*=z;
    }
    cout<<nod<<endl;
    cout<<sod<<endl;



    return 0;
}

