#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> aparece(14, 0);

	int common;
	cin >> common;
	int um, dois;

	int ele = 0;
	int ela = 0;

	cin >> um >> dois;
	ele += min(um, 10) + min(dois, 10);

	aparece[um] += 1;
	aparece[dois] += 1;

	cin >> um >> dois;
	ela += min(um, 10) + min(dois, 10);

	aparece[um] += 1;
	aparece[dois] += 1;

	for(int i = 0; i < common; i++){
		cin >> um;

		aparece[um] += 1;
		ele += min(um, 10);
		ela += min(um, 10);
	}

	int resp = -1;
	for(int i = 1; i < 13; i++){
		if(ele > 23 || ela > 23)
			break;
		if(aparece[i] == 4)
			continue;

		if(ela + min(i, 10) == 23){
			resp = i;
			break;
		} else if (ela + min(i, 10) > 23){
			break;
		}
		if(ele + min(i, 10) > 23){
			resp = i;
			break;
		}

	}
	cout << resp << endl;

}
