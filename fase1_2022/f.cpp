#include<bits/stdc++.h>

using namespace std;

int valor_char(char letra){
	return letra - 'a';
}

struct Nodo{
	vector<int> letras;
	int asteriscos_nesse = 0;
	int asteriscos_totais = 0;
	vector<Nodo*> proximos;

	Nodo(char letra, int total_pai){
		letras.resize(26);
		proximos.resize(26);
		asteriscos_nesse = 0;
		total = total_pai;
		if(letra == '*'){
			asteriscos_nesse = 1;
			total += 1;
		} else if (letra != '&'){
			letras[valor_char(letra)] = 1;
		}
	}

};


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, len;

	cin >> n >> len;

	Nodo raiz('&', 0);

	for(int i = 0; i < n; i++){
		string atual;
		cin >> atual;

		Nodo no = raiz;
		for(auto a: atual){
			if(no.letras[a] == 0){}
		}	
		
	}
}
