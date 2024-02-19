#include<cstring>
void removeConsecutiveDuplicates(char input[]) {
   int j = 0;
   for(int i = 0;i<strlen(input);i++){
      char curr = input[j];
      if(input[i]!=curr){
          j++;
          char temp = input[j];
          input[j] = input[i];
          input[i]=temp;
      }
   }

   j++;
   input[j]='\0';

}
