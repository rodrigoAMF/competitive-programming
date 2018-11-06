int max_sum(vector<int> s){
	
	int resp=0, maior=0;
	
	for(int i=0;i<s.size();i++){
		
		maior=max(0,maior+s[i]);
		
		resp=max(resp,maior);
	}
	
	return resp;
}