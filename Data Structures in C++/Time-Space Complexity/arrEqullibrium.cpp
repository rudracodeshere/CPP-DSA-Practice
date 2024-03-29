int findEquilibriumIndex(int *arr, int n)
{
    int l = 0;
    int k = 0;
    int r = 0;

    for(int i =1;i<n;i++){
        r+=arr[i];
    }

   
    while(k<n){
        if(l == r){
            return k;
        }
        else{
            l+=arr[k];
            k++;
            r-=arr[k];
        }
    }

    return -1;
}