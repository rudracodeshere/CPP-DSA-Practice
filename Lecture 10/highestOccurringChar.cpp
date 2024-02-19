char highestOccurringChar(char input[]) {
    int freq[26] = {0};
    int max = 0;
    char maxChar = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        int index = input[i] - 'a';
        freq[index]++;

        if(freq[index] >= max){
            max = freq[index];
            maxChar = input[i];
        }
    }

    return maxChar;
}
