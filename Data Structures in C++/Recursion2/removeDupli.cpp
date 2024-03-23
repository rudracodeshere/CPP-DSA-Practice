void remove(char *input, int i , int j){
	if(input[j]=='\0'){
		input[i+1]='\0';
		return;
	}
	if(input[j]==input[i]){
		remove(input,i,j+1);
        } else {
                input[i + 1] = input[j];
                
        }
		remove(input, i + 1, j + 1);
}

void removeConsecutiveDuplicates(char *input) {
	remove(input,0,1);
}