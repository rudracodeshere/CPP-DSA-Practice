int length(char input[]){
    int count = 1;
    for(int i = 0;input[i]!='\0';i++){
        count++;
    }
    return count;
}

void shiftRight(char input[]){
    int len = length(input);
    for(int i = len;i>=0;i--){
        input[i+2]= input[i];
    }
}

void replaceHelper(char input[]){
    if(input[0]=='\0'){
        return;
    }

    if(input[0]=='p'&&input[1]=='i'){
        shiftRight(input+2);
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        replaceHelper(input+4);
    }
    else{
        replaceHelper(input+1);
    }
}

void replacePi(char input[]) {
    replaceHelper(input);
}


