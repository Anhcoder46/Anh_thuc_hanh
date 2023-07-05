#include <iostream>
#include <cmath>
#include <string>
#include <assert.h>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>
#include <cstring>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define pb push_back
#define loop(i,n) for(int i=0; i<n; i++)
#define pii pair<int, int>
#define mp make_pair
 
 
 
int main () {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	ios_base::sync_with_stdio(false);
	ll a, b;
	cin >> a >> b;
	int res = 0;
	while (a <= b) {
		a *= 3;
		b *= 2;
		res++;
	}
	cout << res << endl;
	return 0;
}