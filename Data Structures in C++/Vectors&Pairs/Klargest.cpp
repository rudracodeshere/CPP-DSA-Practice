void Klargest(int arr[],int output[],int n,int k){
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i = k-1;i>=0;i--){
        output[(k-1)-i]= arr[i];
    }
}