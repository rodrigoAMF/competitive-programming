#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    getline(cin, s);

    if(s.length() <= 140){
        printf("TWEET\n");
    }else{
        printf("MUTE\n");
    }

    return 0;
}