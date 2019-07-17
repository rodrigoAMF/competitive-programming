#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


const ll N =  1000000007;
ll n,k,l,a,b,c,d;

struct Matrix {
    ll mat[3][3];
};

Matrix matMul(Matrix a, Matrix b,ll p, ll q , ll r) {
    Matrix ans; ll i, j, k;
    for (i = 0; i < p; i++)
        for (j = 0; j < r; j++)
            for (ans.mat[i][j] = k = 0; k < q; k++) {
                    ans.mat[i][j] = (ans.mat[i][j] + a.mat[i][k] * b.mat[k][j]%N)%N;
			}
    return ans;
}

Matrix matPow(Matrix base, ll p) {
    Matrix ans; ll i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
                ans.mat[i][j] = (i == j);
    while (p) {
        if (p & 1) ans = matMul(ans, base,3,3,3);
        base = matMul(base, base,3,3,3);
        p >>= 1;
    }
    return ans;
}

int main(){
    while(~scanf("%lld",&n)){
        n--;
        Matrix M1,M2;
		M1.mat[0][0] = 0; M1.mat[0][1] = 1; M1.mat[0][2] = 1;
		M1.mat[1][0] = 1; M1.mat[1][1] = 0; M1.mat[1][2] = 0;
		M1.mat[2][0] = 0; M1.mat[2][1] = 1; M1.mat[2][2] = 0;
        M1 = matPow(M1,n);
		M2.mat[0][0] = 1; M2.mat[1][0] = 1; M2.mat[2][0] = 1;
		M1 = matMul(M1,M2,3,3,1);
        printf("%lld\n",(M1.mat[0][0]));
    }
    //system("pause");
    return 0;
}