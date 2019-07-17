#include<bits/stdc++.h>

using namespace std;

const int N = 100005,oo = 0x3f3f3f3f;

int n,x,num[N];

int main(){
    while(~scanf("%d%d",&n,&x)){
        vector<int> ans;
        for(int i=0;i<n;i++){
            scanf("%d",&num[i]);
        }
        for(int i=0;i<n;i++)
             for(int j=i+1;j<n;j++)
                for(int k=j+1;k<n;k++)
                    ans.push_back(num[i]+num[j]+num[k]);
        sort(ans.begin(),ans.end(),greater<int>());
        printf("%.1lf\n",ans[x-1]/3.0);
    }
	return 0;
}
