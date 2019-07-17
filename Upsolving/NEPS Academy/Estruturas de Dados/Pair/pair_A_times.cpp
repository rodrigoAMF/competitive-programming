#include <bits/stdc++.h>

using namespace std;

bool pairCompare(const pair<string, int>& firstElem, const std::pair<string, int>& secondElem) {
  return firstElem.second > secondElem.second;

}

bool pairCompare2(const pair<string, int>& firstElem, const std::pair<string, int>& secondElem) {
  return firstElem.first < secondElem.first;

}

int main(){
	int j, e;

	cin >> j >> e;

	vector<pair <string, int>> jogadores;

	for(int i = 0; i < j; i++){
		string n; int h;
		cin >> n >> h;
		jogadores.push_back(make_pair(n,h));
	}

	sort(jogadores.begin(), jogadores.end(), pairCompare);

	vector<pair <string, int> > times[e];

	int atual = 0;
	int contador = 0;

	while(j--){
		if(atual == e) atual = 0;
		times[atual].push_back(jogadores.at(contador));
		atual++;
		contador++;
	}



	for(int i = 0; i < e; i++){
		sort(times[i].begin(), times[i].end(), pairCompare2);
		cout << "Time " << i+1 << endl;
		for(int k = 0; k < times[i].size(); k++){
			cout << times[i].at(k).first << endl;
		}
		if(i != e-1)
			cout << endl;
	}

	return 0;
}