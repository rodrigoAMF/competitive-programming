#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    while(scanf("%d", &n) != EOF){
        set<int> vetor;
        int a;

        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            vetor.insert(a);
        }

        printf("%d\n", vetor.size()-2);
    }

    

    return 0;
}