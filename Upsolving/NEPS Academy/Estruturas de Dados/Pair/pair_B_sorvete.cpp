#include <bits/stdc++.h>

using namespace std;

bool comparasion(const pair<int,int> &elementOne, const pair<int,int> &elementTwo){
	return elementOne.first < elementTwo.first;
}

int main(){
	int p, s;

	cin >> p >> s;

	vector<pair<int, int> > intervalos;

	for(int i = 0; i < s; i++){
		int f, s;
		cin >> f >> s;
		if(f > p || s > p) continue;
		intervalos.push_back(make_pair(f,s));
	}

	if(s == 0 || p == 0){
		cout << "0 0" << endl;
	}else{
		sort(intervalos.begin(), intervalos.end(), comparasion);

		int ultimo;
		for(int i = 0; i < intervalos.size(); i++){
			if(i == 0){
				cout << intervalos.at(i).first;
				ultimo = 0;
			}else if(intervalos.at(i).first == intervalos.at(ultimo).second){
				cout << " " << intervalos.at(i).second << endl;
				ultimo = i;
			}else if(intervalos.at(i).first > intervalos.at(ultimo).second){
				if(ultimo == 0){
					cout << " " << intervalos.at(ultimo).second << endl;
				}
				cout << intervalos.at(i).first << " " << intervalos.at(i).second << endl;
				ultimo = i;
			}
		}
	}

	



	return 0;
}