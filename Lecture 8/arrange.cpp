void arrange(int arr[], int n)
{
    int j =0;
for(int i = 1;i<n;i++){
    if(i%2!=0){
        arr[j]=i;
        j++;
    }
}
    arr[j]=n;
    j++;
    int i = n-1;
    while(i>=2){
        if(i%2==0){
            arr[j]=i;
            j++;
        }
        i--;
    }
}
