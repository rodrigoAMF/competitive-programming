#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nomeor;
    string nomelc;
}Nome;


string toLowerCase(string s) {
    for(unsigned int i =0; i < s.size(); ++i) {
        s[i] = tolower(s[i]);
    }
    return s;
}

bool compararString(Nome s1, Nome s2) {
    if(s1.nomelc.compare(s2.nomelc) < 0) {
        return true;
    }
    return false;
}

int main() {
    
    Nome nomes[1001];
    int i = 0;
    getline(cin, nomes[i].nomeor);
    nomes[i].nomelc = nomes[i].nomeor;
    transform( nomes[i].nomelc.begin(),  nomes[i].nomelc.end(),  nomes[i].nomelc.begin(), ::tolower);

    while(!cin.eof()) {
        i++;
        getline(cin, nomes[i].nomeor);
        nomes[i].nomelc = nomes[i].nomeor;
        transform(nomes[i].nomelc.begin(),  nomes[i].nomelc.end(),  nomes[i].nomelc.begin(), ::tolower);
    }

    sort(nomes, nomes+i+1, compararString);

    for(int j = 0; j <= i; ++j) {
       // cout << nomes[j].nomeor << endl;
    }

    cout << nomes[i].nomeor << endl;

}