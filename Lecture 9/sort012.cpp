void sort012(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    for(int i = 0;i<=end;){
        if(arr[i]==0){
              if(arr[i]==arr[start]){
                i++;
                start++;
              } else {
                int temp = arr[start];
                arr[start] = 0;
                arr[i] = temp;

                start++;
              }
        }
        else if(arr[i]==2){
            if(arr[i]==arr[end]){
                end--;
            } else {
                int temp = arr[end];
                arr[end] = 2;
                arr[i] = temp;

                end--;
            }
        }
        else{
            i++;
        }
    }
}
