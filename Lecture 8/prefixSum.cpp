void prefixSum(int arr[],int n,int output[]){
   for(int i = 0;i<n;i++){
       output[i]=0;
       for(int j = 0;j<=i;j++){
           output[i]+=arr[j];
       }
   }
}
