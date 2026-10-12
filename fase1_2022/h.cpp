#include<bits/stdc++.h>

using namespace std;

int main(){
	int vert, ares;
	cin >> vert >> ares;

	vector<vector<bool>> todos(vert + 1, vector<bool>(vert + 1));
	
	vector<bool> pai(vert+1, false);
	int sem_pai = vert;

	for(int i = 0; i < ares; i++){
		int a, b;
		cin >> a >> b;

		if(!pai[b]){
			pai[b] = true;
			sem_pai -= 1;
		}

	}
}
