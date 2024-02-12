#include<climits>
int findUnique(int arr[], int size)
{
    int max = INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1]={0};
    for(int i = 0;i<size;i++){
        count[arr[i]]++;
    }
    for(int i = 0;i<max+1;i++){
        if(count[i]==1){
            return i;
        }
    }
    return -1;
}
