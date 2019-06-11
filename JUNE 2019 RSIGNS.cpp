#include<bits/stdc++.h>
#define ll 			unsigned long long int
#define endl 		'\n'
#define hell 		1000000007
#define pb 			push_back
#define rs 			resize
#define max(a,b) 	a>b?a:b
#define min(a,b) 	a<b?a:b
#define mp   		make_pair
#define boost 		ios_base ::sync_with_stdio(0); cin.tie(0);

using namespace std;

ll expo(ll base, ll exponent, ll mod) {		//return base^exponent modulo modulus
    ll ans = 1;
    while(exponent !=0 ) {
        if((exponent&1) == 1) {
            ans = ans*base ;
            ans = ans%mod;
        }
        base = base*base;
        base %= mod;
        exponent>>= 1;
    }
    return ans%mod;
}

int main()
{
	boost;
	ll test=1,i,j,K;
	cin>>test;
	while(test--)
	{
		cin>>K;
		ll ans= expo(expo(2,K,hell)*5,1,hell);

		cout<<ans<<endl;


	}
	return 0;
}