#include<bits/stdc++.h>

using namespace std;

const int N = 100005,oo = 0x3f3f3f3f;
typedef long long ll;

int n,num[N];
ll f[2][N],val[N];

void update(int idx,int pos,ll delta){
	while(pos <= N){
		f[idx][pos] += delta;
		pos += (pos & (-pos));
	}
}

ll query(int idx,int pos){
	ll sum = 0;
	while(pos){
		sum += f[idx][pos];
		pos -= (pos & (-pos));
	}
	return sum;
}

ll query(int idx,int l,int r){
	return query(idx,r) - query(idx,l-1);
}


int main(){
	while(~scanf("%d",&n)){
        long long ans = 0;
		memset(f,0,sizeof f);
		for (int i = 1; i <= n; i++){
			scanf("%d",&num[i]);
		}
		for (int i = 1; i <= n; i++){
			scanf("%lld",&val[i]);
		}
		for (int i = 1; i <= n; i++){
            int x = num[i];
			ans += query(0,x,n) + val[i]*query(1,x,n);
            update(0,x,val[i]);
            update(1,x,1);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
