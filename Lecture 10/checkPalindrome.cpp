int length(char str[]){
    int i = 0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
bool checkPalindrome(char str[]) {
    int len = length(str);
    for(int i = 0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return false;
        }
    }
    return true;
}

