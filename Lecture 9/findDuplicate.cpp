int findDuplicate(int arr[], int n)
{
   for(int i = 1;i<n;i++){
       int curr = arr[i];
       int pre = i-1;
       while(pre>=0&&arr[pre]>curr){
           arr[pre+1]=arr[pre];
           pre--;
       }
       arr[++pre]=curr;
       if(arr[pre]==arr[pre-1]){
           return arr[pre];
       }
   }
}
