#include <bits/stdc++.h>

using namespace std; 

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define setbits(x) __builtin_popcountll(x)
#define leadzrobits(x) __builtin_ctzll(x)
#define precise(x,y) fixed<<setprecision(y)<<x
#define gcd(x,y) __gcd(m, n)
#define bs(x, y, z) binary_search(x, y, z) // check whether the number exist return 1 else return 0
#define testcases() int t = 1; cin >> t; while(t--) solve()
#define testcase() solve()
#define revarr(x, y) reverse(x, y)
#define maxarr(x, y) *max_element(x, y)
#define minarr(x, y) *min_element(x, y)

//------------------------------------------------------------------------------------

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

//------------------------------------------------------------------------------------

void solve(){
	int arr[] = {4, 7, 44, 77, 47, 444, 777, 447, 744, 747, 474, 774};
	
	int n;
	cin >> n;
	
	bool flag = false;
	
	for(auto i: arr)
		if(n % i == 0) {
			if(flag == false){
				cout << "YES";
				return;
			}
		}
		
	cout << "NO";
}

int main(){	
	fastio;    
	// testcases(); /* MULTIPLE TESTCASE */	
	testcase();	/* 1 TESTCASE */
	return 0;
}

