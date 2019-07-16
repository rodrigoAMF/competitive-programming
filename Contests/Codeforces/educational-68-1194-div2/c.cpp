#include <bits/stdc++.h>

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define sz (x) int(x.size())
#define all (x) x.begin(), x.end()
#define mset (x, y) memset(&x, (y), sizeof(x))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef vector<int> vi;
typedef pair<int , int> ii;

int max(int a, int b){
	return (a > b) ? a : b;
}

int main(){
	int q;
	string s, t, p;

	scanf("%d ", &q);

	while(q--){
		cin >> s >> t >> p;

		if(s == t || p == t){
			printf("YES\n");
			continue;
		}else if(s.length() >= t.length()){
			printf("NO\n");
		}
		int maior = max(s.length(), t.length());
		maior = max(maior, p.length());

		int qtdS[26];
		int qtdT[26];
		int qtdP[26];
		fill(qtdS, qtdS+26, 0);
		fill(qtdT, qtdT+26, 0);
		fill(qtdP, qtdP+26, 0);
		for(int i = 0; i < maior; i++){
			if(i < (int)s.length()){
				qtdS[s[i]-'a']++;
			}
			if(i < (int)t.length()){
				qtdT[t[i]-'a']++;
			}
			if(i < (int)p.length()){
				qtdP[p[i]-'a']++;
			}
		}

		bool possivel = true;
		for(int i = 0; i < (int)t.length() && possivel; i++){
			if(qtdS[t[i]-'a'] > qtdT[t[i]-'a']){
				possivel = false;
				continue;
			}
			if(qtdS[t[i]-'a'] > 0){
				qtdS[t[i]-'a']--;
			}else if(qtdP[t[i]-'a'] > 0){
				qtdP[t[i]-'a']--;
			}else{
				possivel = false;
			}
		}
		int i, j;
		for(i = 0, j = 0; i < (int)t.length() && j < (int)s.length();){
			if(s[j] != t[i]){
				i++;
			}else{
				i++; j++;
			}
		}
		if(i == (int)t.length() && j != (int)s.length()){
			possivel = false;
		}

		string resposta = (possivel) ? "YES" : "NO";
		cout << resposta << "\n";

	}

	return 0;
}