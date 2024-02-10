bool checkArmstrong(int n){
	int digits=0;
	int temp = n;
	while(temp>0){
		temp/=10;
		digits++;
	}
	temp = n;
	int last;
	int sum = 0;
	while(temp>0){
		last = temp%10;
		int x = last;
		for(int i = 1;i<digits;i++){
			last*=x;
		}
		sum+=last;
		temp/=10;
	}
	if(sum==n){
		return true;
	}
	return false;
}

