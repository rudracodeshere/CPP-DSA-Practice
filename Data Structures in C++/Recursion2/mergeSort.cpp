void merge(int arr[], int l , int mid, int r){
    int k [r-l+1];
    int a = 0;
    int i = l;
    int j = mid+1;
    while(i<= mid&& j<=r){
        if(arr[i]<=arr[j]){
            k[a]=arr[i];
            i++;
        }
        else{
            k[a]=arr[j];
            j++;
        }
        a++;
    }

    while(i<=mid){
        k[a]=arr[i];
        a++;i++;
    }
    while(j<=r){
        k[a]=arr[j];
        j++;a++;
    }

    for(int m = 0,n = l;m< r-l+1;m++,n++){
        arr[n]=k[m];
    }
    return;
}
void mergeSort(int arr[], int l, int r) {
   if(l>=r){
       return;
   }
   int mid = (l+r)/2;
   mergeSort(arr,l,mid);
   mergeSort(arr,mid+1,r);
   merge(arr,l,mid,r);
}