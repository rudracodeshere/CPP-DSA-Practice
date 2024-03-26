
void removeX(char input[]) {
    if(input[0]=='\0'){
        return;
    }
    if(input[0]=='x'){
        for(int i = 1;input[i-1]!='\0';i++){
            input[i-1]=input[i];
        }
        removeX(input);
    }
    removeX(input+1);
}

