int helper(int input[], int size, int x, int output[], int i){

  if(size == 0){
    return 0 ;
  }

  if(input[0]==x){
    output[0]=i;
    return 1 + helper(input+1, size-1,x,output+1,i+1);
  }

else{
  return 0 +  helper(input+1,size-1,x,output,i+1);
}

}

int allIndexes(int input[], int size, int x, int output[]) {
  return helper(input,size,x,output,0);
}

