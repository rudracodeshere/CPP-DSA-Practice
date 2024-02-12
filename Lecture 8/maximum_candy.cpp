bool isMax(int arr[], int maxInd,int n){
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[maxInd]){
            return false;
        }
    }
    return true;
}

void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
   for(int i = 0;i<n;i++){
       int temp = arr[i];
       arr[i]+=extraCandies;
       if(isMax(arr,i,n)){
           output[i]=true;
       }
       else{
           output[i]=false;
       }
       arr[i]=temp;
   }
}


