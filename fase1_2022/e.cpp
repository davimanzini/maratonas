#include<bits/stdc++.h>

using namespace std;

#define INF = INT_MAX;

int main(){
	int n;
	cin >> n;

	vector<pair<int, int>> alturas(n);

	for(int i = 0; i < n; i++){
		int alt;
		cin >> alt;

		alturas[i] = {alt, i};
	}

	sort(alturas.rbegin(), alturas.rend());

	/*for(auto [a, b] : alturas){
		cout << a << " : " << b << endl;
	}*/

	int i = 0;
	bool primeiro = true;
	int dardos = 0;
	while(i < n){
		int j = i + 1;
		while(j < n && alturas[j].first == alturas[i].first)
			j ++;


		if(primeiro){
			dardos = j - i;
			primeiro = false;
		}

		if(j >= n)
			break;

		int iter = j;
		int iter_i = i;
		int estourados = 0;
		while(iter < n && alturas[iter].first == alturas[j].first){
			if(alturas[j].first == alturas[i].first - 1){
				while(iter_i < j){
					if(alturas[iter_i].second < alturas[iter].second){
						estourados ++;
						iter_i++;
						break;
					}else
						iter_i++;

				}	
				iter++;			
			} else {
				iter++;
			}
		}

		dardos += iter - j - estourados;

		i = j;
	}

	cout << dardos << endl;


}
