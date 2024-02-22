int countWords(string str) {
	int count = 0;
	for(int i = 0;i<str.size();i++){
		if(i==str.size()-1){
			count++;
			break;
		}
		if(str.at(i)==' '){
			count++;
		}
	}
	return count;
}