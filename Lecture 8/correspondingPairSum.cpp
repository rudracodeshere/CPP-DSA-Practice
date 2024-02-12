void correspondingPairSum(int arr[],int n,int output[]){
   int i = 0;
   int j=n-1;
   while(i<j){
       output[i]= arr[i]+arr[j];
       i++;
       j--;
   }
}
