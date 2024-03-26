int length(char input[]){
    int count = 0;
    for(int i = 0;input[i]!='\0';i++){
        count ++;
    }
    return count;
}
int pow(int a, int b){
if(b == 0){
    return 1;
}
return a*pow(a,b-1);
}
int stringToNumber(char input[]) {
    if(length(input)==1){
        return input[0]-'0';
    }
    int b = input[0]-'0';
    return b*pow(10,length(input+1))+stringToNumber(input+1);
}



