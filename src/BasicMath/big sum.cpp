#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
	ll t,xsum=0,ysum=0; cin>>t;
	while(t--){
        string a,b;
        cin>>a>>b;
        ll alen=a.size();
        ll blen=b.size();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        if(alen<blen){
        for(ll i=min(alen,blen); i<max(alen,blen); i++){

            a.push_back('0');
        }
        }
        else if(alen>blen){
            for(ll i=min(alen,blen); i<max(alen,blen); i++){

            b.push_back('0');
        }
        }
        vector<ll>v;
       // cout<<a<<" "<<b<<endl;
       ll carry=0;
        for(ll i=0; i<a.size(); i++){
            ll x=a[i]-'0';
            ll y=b[i]-'0';
            ll s=x+y+carry;
            if(s>=10)
            {
                v.push_back(s%10);
                carry=1;
            }
            else{
                v.push_back(s);
                carry=0;
            }
        }
        if(carry>0)v.push_back(carry);
        reverse(v.begin(),v.end());
        for(auto i:v)cout<<i;
        cout<<endl;

	}
    return 0;
}


