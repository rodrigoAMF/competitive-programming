#include <bits/stdc++.h>

using namespace std;

int main(){
	/*#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout);
	#endif*/

	queue<char> times;

	for(char c = 'A'; c != 'Q'; c++){
		times.push(c);
	}

	for(int i = 0; i < 15; i++){
		int t1, t2;
		scanf("%d %d", &t1, &t2);
		char tim1, tim2;
		tim1 = times.front();
		times.pop();
		tim2 = times.front();
		times.pop();
		if(t1 > t2){
			times.push(tim1);
		}else{
			times.push(tim2);
		}
	}

	cout << times.front() << endl;

	return 0;
}