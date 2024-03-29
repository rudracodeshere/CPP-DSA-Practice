int findDuplicate(int *arr, int n)
{
    int correctSum = 0;
    for(int i = 0;i<=n-2;i++){
        correctSum+=i;
    }
    int actualSum = 0;
     for(int i = 0;i<=n-1;i++){
        actualSum+=arr[i];
    }

    return actualSum-correctSum;
}