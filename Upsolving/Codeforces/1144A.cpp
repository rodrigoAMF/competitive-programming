#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ld long double
#define INF 0x3f3f3f3f
#define f first
#define pb push_back
#define mp make_pair
#define l length()
#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define fornx(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(NULL);

    int n;
    string s;

    cin >> n;

    while(n--){
        bool ok = true;
        //map<char, int> ocorrencias;
        cin >> s;
        sort(s.begin(), s.end());
        //ocorrencias[s[0]] = 1;
        if(s.length() > 1){
            for(int i = 0; i < s.length()-1; i++){
                int ascii1 = (int)s[i];
                int ascii2 = (int)s[i+1];
                if(ascii2 != (ascii1+1)){
                    ok = false;
                    break;
                }/*else{
                    ocorrencias[s[i+1]] = 1;
                }*/
            }
        }
        
        if(ok){
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }
    }

	
	return 0;
}
