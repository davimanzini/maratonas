#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	bool deu = true;
	for (int i = 0; i < 8; i++){
		int a;
		cin >> a;

		if (a == 9)
			deu = false;
	}

	if(deu)
		cout << 'S' << endl;
	else
		cout << 'F' << endl;
}
