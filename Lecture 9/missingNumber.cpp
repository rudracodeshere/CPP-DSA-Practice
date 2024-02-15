int missingNumber(int arr[], int n)
{
    bool isNote=false;
    int ans;
   for(int i = 0;i<=n;i++){
       for(int j = 0;j<n;j++){
           if(arr[j]==i){
               isNote=true;
               break;
           }
       }
       if(isNote==false){
               ans  = i;
               break;
           }
           isNote=false;
   }
    return ans;
}
