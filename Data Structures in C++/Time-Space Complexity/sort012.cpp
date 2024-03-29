void sort012(int *arr, int n)
{t
    int i = 0;
    int z= 0;
    int t = n-1;

    while(i<t){
        if(arr[i]==0){
            swap(arr[i],arr[z]);
            i++;
            z++;
        }
        else if(arr[i]==1){
            i++;
        }
        else{
            swap(arr[t],arr[i]);
            t--;
        }
     }
}