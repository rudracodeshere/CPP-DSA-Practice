
int findUnique(int *arr, int n) {

    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int *newArr = new int[max+1];
    for(int i = 0;i<n;i++){
        newArr[arr[i]]++;
    }
     for(int i = 0;i<n;i++){
         if( newArr[arr[i]]==1){
             return arr[i];
         }
     }
}