void shift(char input[]){

    int c = 0;
    for(int i =0; input[i-1]!='\0'; i++){
        c++;
    }

    for(;c>0;c--){
        input[c]=input[c-1];
    }

}
void pairStar(char input[]) {
    if(input[0]=='\0'){
        return;
    }

    if(input[0]==input[1]){
        shift(input+1);
        input[1]= '*';
        pairStar(input+2);
    }
    else{
        pairStar(input+1);
    }

}

