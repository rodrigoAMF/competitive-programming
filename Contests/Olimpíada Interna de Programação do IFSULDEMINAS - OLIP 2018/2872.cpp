#include <bits/stdc++.h>

using namespace std;

int main(){
	bool begin = 1;
	string x;
	vector<string> pacotes;

	cin.tie(NULL);
	cout.sync_with_stdio(false);

	while(cin >> x){
		if(x == "1"){
			if(!begin)
				cout << "\n";
			continue;
		}
		if(x == "0"){
			sort(pacotes.begin(), pacotes.end());
			for(int i = 0; i < pacotes.size(); ++i){
				cout << "Package " << pacotes.at(i) << "\n";
			}
			pacotes.clear();
			if(begin)
				begin = 0;
			continue;
		}
		cin >> x;
		pacotes.push_back(x);
	}
	cout << "\n";

	return 0;
}