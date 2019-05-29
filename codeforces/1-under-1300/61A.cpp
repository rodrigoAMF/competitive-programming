#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n1,n2, saida;

    cin >> n1 >> n2;

    for(int i = 0; i < n1.length(); i++){
        cout << ((n1[i] != n2[i]) ? '1' : '0');
    }

    cout << "\n";

    return 0;
}