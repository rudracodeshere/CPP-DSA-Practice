int partitionArray(int input[], int start, int end) {
	int p = input[start];
	int count = 0;
	for(int i = start+1;i<=end;i++){
		if(input[i]<=p){
			count++;
		}
	}

	int ind = start + count;
	swap(input[start], input[ind]);
	int i = start;
	int j = end;
	while(i<ind&&j>ind){
		if(input[i]<=input[ind]){
			i++;
		}
		else if(input[j]>input[ind]){
			j--;
		}
		else{
			swap(input[i],input[j]);
		}
	}
	return ind;
}

void quickSort(int input[], int start, int end) {
	if(start>=end){
		return;
	}

	int c = partitionArray(input,start,end);
	quickSort(input,start,c-1);
	quickSort(input,c+1,end);
	return;
}
