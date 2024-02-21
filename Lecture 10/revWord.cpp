void revWord(char input[], int wStart, int wEnd){
    for(int i = wStart;i<=((wStart+wEnd)/2);i++){
        char temp= input[i];
        input[i]=input[wEnd+wStart-i];
        input[wEnd+wStart-i]=temp;
    }
}
void reverseEachWord(char input[]) {
    int wStart = 0;
    int wEnd = 0;
    for(int i = 0;i<strlen(input);i++){
        if(input[i]==' '){
            wEnd = i-1;
            revWord(input,wStart,wEnd);
            wStart = i+1;
        }
        else if(i == strlen(input)-1){
            wEnd = i;
            revWord(input,wStart,wEnd);
        }
    }
}


