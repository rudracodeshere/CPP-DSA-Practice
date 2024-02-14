void insertionSort(int arr[], int n)
{
   for(int i = 1;i<n;i++){
       int curr = arr[i];
       int prev = i-1;
       while(prev>=0&&arr[prev]>curr){
           int temp = arr[prev];
           arr[prev]=curr;
           arr[prev+1]=temp;
           prev--;
       }
   }
}
