void removeAllOccurrencesOfChar(string input, char c) 
{
   for(int i = 0;i<input.size();i++){
       if(input[i]!=c){
           cout<<input.at(i);
       }
   }
}