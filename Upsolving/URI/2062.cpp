#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    cin.ignore();

    string palavra;

    for(int i = 0; i < n; i++){
        cin >> palavra;
        if(palavra.length() == 3){
            if(palavra[0] == 'U' && palavra[1] == 'R'){
                cout << "URI";
            }else if(palavra[0] == 'O' && palavra[1] == 'B'){
                cout << "OBI";
            }else{
                cout << palavra;
            }
        }else{
            cout << palavra;
        }
        if(i < (n-1)){
            cout << " ";
        }else{
            cout << "\n";
        }
    }
    
    
    return 0;
}