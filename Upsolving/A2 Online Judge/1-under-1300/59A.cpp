#include <bits/stdc++.h>

using namespace std;

int main(){
    int upper, lower;
    string word;

    cin >> word;

    upper = lower = 0;

    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            lower++;
        }
        if(word[i] >= 'A' && word[i] <= 'Z'){
            upper++;
        }
    }

    if(lower >= upper){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }else{
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }

    cout << word << "\n";

    return 0;
}