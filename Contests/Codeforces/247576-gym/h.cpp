#include <bits/stdc++.h>

using namespace std;

int LPS(string X, int i, int j, auto &lookup)
{
	if (i > j)
		return 0;

	if (i == j)
		return 1;

	string key = to_string(i) + "|" + to_string(j);

	if (lookup.find(key) == lookup.end())
	{
		if (X[i] == X[j])
			lookup[key] = LPS(X, i + 1, j - 1, lookup) + 2;
		else

		lookup[key] = max (LPS(X, i, j - 1, lookup),
					LPS(X, i + 1, j, lookup));
	}

	return lookup[key];
}


int main(){
	int N;
	string palavra;

	cin >> palavra;

	N = (int)palavra.length();

	palavra.erase(remove(palavra.begin(), palavra.end(), 'a'), palavra.end());
	
	if(palavra.length() == 0){
		cout << "0\n";
	}else{
		unordered_map<string, int> lookup;

		cout << LPS(palavra, 0, N, lookup) << endl;
	}

	
	
	return 0;
}