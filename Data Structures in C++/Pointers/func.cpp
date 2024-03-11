#include <iostream>
void func(char *str) 
{
   int i = 0;
   while(str[i]!='\0'){
       i++;
   }

   for(int j = 0; j < i/2; j++){
       char temp = str[j];
       str[j] = str[i-j-1];
       str[i-j-1] = temp;
   }

}