#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n, m;

	cin >> n >> m;
	cin.ignore();

	string s;
	vector<string> v, d;
	for(int i = 0; i < n*m; i++){
		cin >> s;
		if(s[1] == 'V'){
			v.push_back(s);
		}else{
			d.push_back(s);
		}
		
	}
	sort(v.rbegin(), v.rend());
	sort(d.rbegin(), d.rend());

	for(vector<string>::iterator it = v.begin(); it != v.end(); ++it){
		cout << *it << "\n";
	}
	for(vector<string>::iterator it = d.begin(); it != d.end(); ++it){
		cout << *it << "\n";
	}

	return 0;
}