void trimSpaces(char input[]) {
    int swap = 0;
    for(int i = 0;;i++){

        if(input[i+1]=='\0'){
            char temp = input[i];
            input[i]=input[i+1];
            input[i+1]=' ';
            break;
        }

         if(input[i]==' '&&input[i+1]==' '){
             continue;
        }

        else if(input[i]==' '){
            char temp = input[swap];
            input[swap]=input[i+1];
            input[i+1]=' ';
        }

        swap++;

    }

}
