#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	vector<int> students;
	int sa;
	int contadorProblemas = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &sa);
		students.push_back(sa);
	}
	sort(students.begin(), students.end());

	for(int i = 0; i < n; i+=2){
		contadorProblemas += students.at(i+1)-students.at(i);
	}
	printf("%d\n", contadorProblemas);

	return 0;
}