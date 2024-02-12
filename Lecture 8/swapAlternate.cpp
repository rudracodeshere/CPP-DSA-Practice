void swapAlternate(int arr[], int size)
{
int i = 0;
int j = 1;
while(j<size){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j] =temp;
    i+=2;
    j+=2;
}

}
