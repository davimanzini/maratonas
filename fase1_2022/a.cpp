#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int seq = 0;
	int total = 0;
	for (int i = 0; i < n; i++){
		char a;
		cin >> a;

		if(a == 'a'){
			seq++;
		} else{
			if (seq > 1)
				total += seq;

			seq =0;
		}
	}
	if (seq > 1)
		total += seq;

	cout << total << endl;

	return 0;
}
