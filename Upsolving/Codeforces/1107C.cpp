#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
	/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	int n, k;

	vector<int> seq;
	string buttons;
	ll somaTotal = 0;

	cin >> n >> k;
	seq.resize(n);

	// cooool
	for(int &a : seq){
		cin >> a;
	}

	cin >> buttons;

	for(int i = 0, j = 0; i < n; i = j){
		while(j < n && buttons[j] == buttons[i])
			j++;

		sort(seq.begin()+i, seq.begin()+j);
		reverse(seq.begin()+i, seq.begin()+j);

		//cout << i << "-" << min(j, i+k) << " = ";

		for(int z = i; z < min(j, i+k); z++){
			somaTotal+=seq[z];
		}
		//cout << somaTotal << endl;
	}

	cout << somaTotal << "\n";


	return 0;
}