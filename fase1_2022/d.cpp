#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x, y;
	cin >> n >> x >> y;

	assert((x&-x) == (y&-y));
	cout<< n - 1 - __lg(x&-x) << endl;
}
