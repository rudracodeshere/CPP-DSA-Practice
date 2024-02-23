
int makeBeautiful(string str) {
	int c1 = 0;
	int c2 = 0;
	for(int i = 0;i<str.size();i++){
		if(i%2==0){
			if(str[i]=='0'){
				c1++;
			}
			else{
				c2++;
			}
		}
		else{
			if(str[i]=='1'){
				c1++;
			}
			else{
				c2++;
			}
		}
	}
	int min = c1>c2?c2:c1;
	return min;
}