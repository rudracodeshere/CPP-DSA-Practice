int lastIndex(int input[], int size, int x) {
if(size == 1){
  if(input[0]==x){
    return 0;
  }
  else{
    return -1;
  }
}
int li = lastIndex(input+1, size-1, x);
if(li!=-1){
  return li+1;
}
else{
  if(input[0]==x){
    return 0;
  }
  else{
    return -1;
  }
}
}
