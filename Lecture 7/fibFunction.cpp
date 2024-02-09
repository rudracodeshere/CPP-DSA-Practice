bool checkMember(int n){
  int prev = 0;
  int curr = 1;
int next;
  if(n==0 || n== 1){
    return true;
  }
  do{
    next = prev + curr;
    prev = curr;
    curr = next;
    if(next==n){
      return true;
      break;
    }
  }while(next<=n);
  return false;
}

